/*
  Red Black balanced tree library

    > Created (Julienne Walker): August 23, 2003
    > Modified (Julienne Walker): March 14, 2008
*/

#include <corto/corto.h>
#include "jsw_rbtree.h"

#ifdef __cplusplus
#include <cstdlib>

using std::malloc;
using std::free;
using std::size_t;
#endif

struct jsw_rbnode {
  int                red;     /* Color (1=red, 0=black) */
  void              *key;    /* User-defined key */
  void              *data;   /* User-defined payload */
  struct jsw_rbnode *link[2]; /* Left (0) and right (1) links */
};

typedef corto_equalityKind ___ (*corto_equalFunction)(corto_any this, corto_any value);

struct jsw_rbtree {
  jsw_rbnode_t *root; /* Top of the tree */
  corto_equals_cb cmp;  /* Compare two items */
  corto_type type; /* This object which must be passed to cmp-function */
  size_t size; /* Number of items (user-defined) */
  corto_int32 changes; /* Change counter- for iterators */
};

/**
  <summary>
  Checks the color of a red black node
  <summary>
  <param name="root">The node to check</param>
  <returns>1 for a red node, 0 for a black node</returns>
  <remarks>For jsw_rbtree.c internal use only</remarks>
*/
static int is_red ( jsw_rbnode_t *root )
{
  return root != NULL && root->red == 1;
}

/**
  <summary>
  Performs a single red black rotation in the specified direction
  This function assumes that all nodes are valid for a rotation
  <summary>
  <param name="root">The original root to rotate around</param>
  <param name="dir">The direction to rotate (0 = left, 1 = right)</param>
  <returns>The new root ater rotation</returns>
  <remarks>For jsw_rbtree.c internal use only</remarks>
*/
static jsw_rbnode_t *jsw_single ( jsw_rbnode_t *root, int dir )
{
  jsw_rbnode_t *save = root->link[!dir];

  root->link[!dir] = save->link[dir];
  save->link[dir] = root;

  root->red = 1;
  save->red = 0;

  return save;
}

/**
  <summary>
  Performs a double red black rotation in the specified direction
  This function assumes that all nodes are valid for a rotation
  <summary>
  <param name="root">The original root to rotate around</param>
  <param name="dir">The direction to rotate (0 = left, 1 = right)</param>
  <returns>The new root after rotation</returns>
  <remarks>For jsw_rbtree.c internal use only</remarks>
*/
static jsw_rbnode_t *jsw_double ( jsw_rbnode_t *root, int dir )
{
  root->link[!dir] = jsw_single ( root->link[!dir], !dir );

  return jsw_single ( root, dir );
}

/**
  <summary>
  Creates an initializes a new red black node with a copy of
  the data. This function does not insert the new node into a tree
  <summary>
  <param name="tree">The red black tree this node is being created for</param>
  <param name="data">The data value that will be stored in this node</param>
  <returns>A pointer to the new node</returns>
  <remarks>
  For jsw_rbtree.c internal use only. The data for this node must
  be freed using the same tree's rel function. The returned pointer
  must be freed using C's free function
  </remarks>
*/
static jsw_rbnode_t *new_node ( jsw_rbtree_t *tree, void* key, void *data )
{
  CORTO_UNUSED(tree);
  jsw_rbnode_t *rn = (jsw_rbnode_t *)malloc ( sizeof *rn );

  if ( rn == NULL )
    return NULL;

  rn->red = 1;
  rn->key = key;
  rn->data = data;
  rn->link[0] = rn->link[1] = NULL;

  return rn;
}

void *jsw_rbnodedata(jsw_rbnode_t *node) {
  return node->data;
}

/* Marshall between intern comparefunction and corto::type::equals */
static corto_equalityKind corto_rbtreeGenericCompare(corto_type t, const void* v1, const void* v2) {
    return corto_ptr_compare((void*)v1, (corto_map(t))->keyType, (void*)v2);
}

/**
  <summary>
  Creates and initializes an empty red black tree with
  user-defined comparison, data copy, and data release operations
  <summary>
  <param name="cmp">User-defined data comparison function</param>
  <param name="dup">User-defined data copy function</param>
  <param name="rel">User-defined data release function</param>
  <returns>A pointer to the new tree</returns>
  <remarks>
  The returned pointer must be released with jsw_rbdelete
  </remarks>
*/
jsw_rbtree_t *jsw_rbnew ( corto_type type, corto_equals_cb cmp)
{
  jsw_rbtree_t *rt = (jsw_rbtree_t *)malloc ( sizeof *rt );

  if ( rt == NULL )
    return NULL;

  if (!cmp) {
      cmp = corto_rbtreeGenericCompare;
  }

  rt->root = NULL;
  rt->cmp = cmp;
  rt->type = type;
  rt->size = 0;
  rt->changes = 0;

  return rt;
}

corto_type jsw_rbtype( jsw_rbtree_t *tree) {
    return tree->type;
}


void jsw_keyFree( jsw_rbtree_t *tree, void *key )
{
    if (tree->type) {
        corto_type keyType = corto_map(tree->type)->keyType;

        if (keyType->reference) {
            corto_release(*(corto_object*)key);
        } else {
            if (keyType->kind == CORTO_PRIMITIVE) {
                if (corto_primitive(keyType)->kind == CORTO_TEXT) {
                    free(*(corto_string*)key);
                }
            }
        }
        free(key);
    }
}
/**
  <summary>
  Releases a valid red black tree
  <summary>
  <param name="tree">The tree to release</param>
  <remarks>
  The tree must have been created using jsw_rbnew
  </remarks>
*/
void jsw_rbdelete ( jsw_rbtree_t *tree )
{
  jsw_rbnode_t *it = tree->root;
  jsw_rbnode_t *save;

  /*
    Rotate away the left links so that
    we can treat this like the destruction
    of a linked list
  */
  while ( it != NULL ) {
    if ( it->link[0] == NULL ) {
      /* No left links, just kill the node and move on */
      save = it->link[1];
      jsw_keyFree( tree, it->key );
      free ( it );
    }
    else {
      /* Rotate away the left link and check again */
      save = it->link[0];
      it->link[0] = save->link[1];
      save->link[1] = it;
    }

    it = save;
  }

  free ( tree );
}

/**
  <summary>
  Search for a copy of the specified
  node data in a red black tree
  <summary>
  <param name="tree">The tree to search</param>
  <param name="data">The data value to search for</param>
  <returns>
  A pointer to the data value stored in the tree,
  or a null pointer if no data could be found
  </returns>
*/
void *jsw_rbfind ( jsw_rbtree_t *tree, void *key )
{
  jsw_rbnode_t *it = tree->root;

  while ( it != NULL ) {
    int cmp = tree->cmp ( tree->type, it->key, key );

    if ( cmp == 0 )
      break;

    /*
      If the tree supports duplicates, they should be
      chained to the right subtree for this to work
    */
    it = it->link[cmp < 0];
  }

  return it == NULL ? NULL : it->data;
}

void *jsw_rbfindPtr ( jsw_rbtree_t *tree, void *key )
{
    jsw_rbnode_t *it = tree->root;

    while ( it != NULL ) {
        int cmp = tree->cmp ( tree->type, it->key, key );

        if ( cmp == 0 )
            break;

        /*
         If the tree supports duplicates, they should be
         chained to the right subtree for this to work
         */
        it = it->link[cmp < 0];
    }

    return it == NULL ? NULL : &it->data;
}

/**
  <summary>
  Search for a copy of the specified
  node data in a red black tree
  <summary>
  <param name="tree">The tree to search</param>
  <param name="key">The key value to search for</param>
  <param name="data">[out] When a node is found, this value will hold the data pointer</param>
  <returns>
  A boolean value indicating whether the key is found.
  </returns>
*/
int jsw_rbhaskey ( jsw_rbtree_t *tree, const void *key, void** data )
{
  return jsw_rbhaskey_w_cmp( tree, key, data, tree->cmp );
}

int jsw_rbhaskey_w_cmp ( jsw_rbtree_t *tree, const void *key, void** data, corto_equals_cb f_cmp )
{
  jsw_rbnode_t *it = tree->root;

  while ( it != NULL ) {
    int cmp = f_cmp ( tree->type, it->key, key );

    if ( cmp == 0 )
      break;

    /*
      If the tree supports duplicates, they should be
      chained to the right subtree for this to work
    */
    it = it->link[cmp < 0];
  }
  if (it && data) {
      *data = it->data;
  }

  return !(it == NULL);
}


/**
  <summary>
  Insert a copy of the user-specified
  data into a red black tree
  old_out and overwrite allow the function
  to be used as a find-or-insert.
  <summary>
  <param name="tree">The tree to insert into</param>
  <param name="data">The data value to insert</param>
  <param name="old_out">The old value</param>
  <param name="overwrite">Is overwriting allowed</param>
  <returns>
  1 if the value was inserted successfully,
  0 if the insertion failed for any reason
  </returns>
*/
int jsw_rbinsert ( jsw_rbtree_t *tree, void* key, void *data, void **old_out, corto_bool overwrite )
{
  CORTO_UNUSED(overwrite);

  if (old_out)
    *old_out = NULL;

  if ( tree->root == NULL ) {
    /*
      We have an empty tree; attach the
      new node directly to the root
    */
    tree->root = new_node ( tree, key, data );
    ++tree->size;

    if ( tree->root == NULL )
      return 0;
  }
  else {
    jsw_rbnode_t head = {0, NULL, NULL, {NULL,NULL}}; /* False tree root */
    jsw_rbnode_t *g, *t;     /* Grandparent & parent */
    jsw_rbnode_t *p, *q;     /* Iterator & parent */
    int dir = 0, last = 0;

    /* Set up our helpers */
    t = &head;
    g = p = NULL;
    q = t->link[1] = tree->root;

    /* Search down the tree for a place to insert */
    for ( ; ; ) {
      if ( q == NULL ) {
        /* Insert a new node at the first null link */
        p->link[dir] = q = new_node ( tree, key, data );
        ++tree->size;

        if ( q == NULL )
          return 0;
      }
      else if ( is_red ( q->link[0] ) && is_red ( q->link[1] ) ) {
        /* Simple red violation: color flip */
        q->red = 1;
        q->link[0]->red = 0;
        q->link[1]->red = 0;
      }

      if ( is_red ( q ) && is_red ( p ) ) {
        /* Hard red violation: rotations necessary */
        int dir2 = t->link[1] == g;

        if ( q == p->link[last] )
          t->link[dir2] = jsw_single ( g, !last );
        else
          t->link[dir2] = jsw_double ( g, !last );
      }

      /*
        Stop working if we inserted a node. This
        check also disallows duplicates in the tree
      */
      corto_equalityKind eq = tree->cmp ( tree->type, q->key, key );
      if ( eq == 0 ) {
        if (old_out)
          *old_out = q->data;
        break;
      }

      last = dir;
      dir = eq < 0;

      /* Move the helpers down */
      if ( g != NULL )
        t = g;

      g = p, p = q;
      q = q->link[dir];
    }

    /* Update the root (it may be different) */
    tree->root = head.link[1];
  }

  /* Make the root black for simplified logic */
  tree->root->red = 0;

  tree->changes++;
  return 1;
}

/**
  <summary>
  Remove a node from a red black tree
  that matches the user-specified data
  <summary>
  <param name="tree">The tree to remove from</param>
  <param name="data">The data value to search for</param>
  <returns>
  1 if the value was removed successfully,
  0 if the removal failed for any reason
  </returns>
  <remarks>
  The most common failure reason should be
  that the data was not found in the tree
  </remarks>
*/
int jsw_rberase ( jsw_rbtree_t *tree, void *key )
{
  if ( tree->root != NULL ) {
    jsw_rbnode_t head = {0, NULL, NULL, {NULL,NULL}}; /* False tree root */
    jsw_rbnode_t *q, *p, *g; /* Helpers */
    jsw_rbnode_t *f = NULL;  /* Found item */
    int dir = 1;

    /* Set up our helpers */
    q = &head;
    g = p = NULL;
    q->link[1] = tree->root;

    /*
      Search and push a red node down
      to fix red violations as we go
    */
    while ( q->link[dir] != NULL ) {
      int last = dir;

      /* Move the helpers down */
      g = p, p = q;
      q = q->link[dir];
      corto_equalityKind eq = tree->cmp ( tree->type, q->key, key );
      dir = eq  < 0;

      /*
        Save the node with matching data and keep
        going; we'll do removal tasks at the end
      */
      if ( eq == 0 )
        f = q;

      /* Push the red node down with rotations and color flips */
      if ( !is_red ( q ) && !is_red ( q->link[dir] ) ) {
        if ( is_red ( q->link[!dir] ) )
          p = p->link[last] = jsw_single ( q, dir );
        else if ( !is_red ( q->link[!dir] ) ) {
          jsw_rbnode_t *s = p->link[!last];

          if ( s != NULL ) {
            if ( !is_red ( s->link[!last] ) && !is_red ( s->link[last] ) ) {
              /* Color flip */
              p->red = 0;
              s->red = 1;
              q->red = 1;
            }
            else {
              int dir2 = g->link[1] == p;

              if ( is_red ( s->link[last] ) )
                g->link[dir2] = jsw_double ( p, last );
              else if ( is_red ( s->link[!last] ) )
                g->link[dir2] = jsw_single ( p, last );

              /* Ensure correct coloring */
              q->red = g->link[dir2]->red = 1;
              g->link[dir2]->link[0]->red = 0;
              g->link[dir2]->link[1]->red = 0;
            }
          }
        }
      }
    }

    /* Replace and remove the saved node */
    if ( f != NULL ) {
      f->key = q->key;
      f->data = q->data;
      p->link[p->link[1] == q] =
        q->link[q->link[0] == NULL];
      free ( q );
    }

    /* Update the root (it may be different) */
    tree->root = head.link[1];

    /* Make the root black for simplified logic */
    if ( tree->root != NULL )
      tree->root->red = 0;

    --tree->size;
  }

  tree->changes++;
  return 1;
}

/* Get minimum and maximum */
void *jsw_rbgetmin ( jsw_rbtree_t *tree, void** key) {
    jsw_rbnode_t* min;
    void *result;

    min = tree->root;
    result = NULL;

    while(min->link[0]) {
        min = min->link[0];
    }

    if (min) {
        if (key) {
            *key = min->key;
        }
        result = min->data;
    }
    return result;
}

void *jsw_rbgetmax ( jsw_rbtree_t *tree, void** key) {
    jsw_rbnode_t* max;
    void *result;

    max = tree->root;
    result = NULL;

    while(max->link[1]) {
        max = max->link[1];
    }

    if (max) {
        if (key) {
            *key = max->key;
        }
        result = max->data;
    }
    return result;
}

/* Get next and prev */
void *jsw_rbgetnext ( jsw_rbtree_t *tree, void* key, void** key_out) {
    jsw_rbnode_t* stack[32];
    corto_uint32 sp;
    jsw_rbnode_t *it = tree->root;
    void* result;

    sp = 0;
    while ( it != NULL ) {
      int cmp = tree->cmp ( tree->type, it->key, key );
      if ( cmp == 0 )
        break;

      stack[sp] = it;
      sp++;
      it = it->link[cmp < 0];
    }

    result = NULL;
    if (it) {
        if (it->link[1]) {
            it = it->link[1]; /* right */
            while(it->link[0]) {
                it = it->link[0];
            }
            result = it->data;
        } else {
            while(sp && tree->cmp( tree->type, stack[sp-1]->key, key) == -1) {
                sp--;
            }
            if (sp) {
                it = stack[sp-1];
                result = it->data;
            }
        }
    }

    if (it) {
        if (key_out) {
            *key_out = it->key;
        }
    }

    return result;
}


void *jsw_rbgetprev ( jsw_rbtree_t *tree, void* key, void** key_out) {
    jsw_rbnode_t *it = tree->root;
    void* result;

    while ( it != NULL ) {
      int cmp = tree->cmp ( tree->type, it->key, key );

      if ( cmp == 0 )
        break;

      /*
        If the tree supports duplicates, they should be
        chained to the right subtree for this to work
      */
      it = it->link[cmp < 0];
    }

    result = NULL;
    if (it) {
        it = it->link[0]; /* left */
        if (it) {
            while(it->link[1]) {
                it = it->link[1];
            }
            result = it->data;
        }
    }

    if (it) {
        if (key_out) {
            *key_out = it->key;
        }
    }

    return result;
}

/**
  <summary>
  Gets the number of nodes in a red black tree
  <summary>
  <param name="tree">The tree to calculate a size for</param>
  <returns>The number of nodes in the tree</returns>
*/
size_t jsw_rbsize ( jsw_rbtree_t *tree )
{
  return tree->size;
}

/**
  <summary>
  Create a new traversal object
  <summary>
  <returns>A pointer to the new object</returns>
  <remarks>
  The traversal object is not initialized until
  jsw_rbtfirst or jsw_rbtlast are called.
  The pointer must be released with jsw_rbtdelete
  </remarks>
*/
jsw_rbtrav_t *jsw_rbtnew ( void )
{
  return (jsw_rbtrav_t*)malloc ( sizeof ( jsw_rbtrav_t ) );
}

/**
  <summary>
  Release a traversal object
  <summary>
  <param name="trav">The object to release</param>
  <remarks>
  The object must have been created with jsw_rbtnew
  </remarks>
*/
void jsw_rbtdelete ( jsw_rbtrav_t *trav )
{
  free ( trav );
}

/**
  <summary>
  Initialize a traversal object. The user-specified
  direction determines whether to begin traversal at the
  smallest or largest valued node
  <summary>
  <param name="trav">The traversal object to initialize</param>
  <param name="tree">The tree that the object will be attached to</param>
  <param name="dir">
  The direction to traverse (0 = ascending, 1 = descending)
  </param>
  <returns>A pointer to the smallest or largest data value</returns>
  <remarks>For jsw_rbtree.c internal use only</remarks>
*/
static void *start ( jsw_rbtrav_t *trav, jsw_rbtree_t *tree, int dir, int ptr )
{
  trav->tree = tree;
  trav->it = tree->root;
  trav->top = 0;
  trav->changes = tree->changes;

  /* Save the path for later traversal */
  if ( trav->it != NULL ) {
    while ( trav->it->link[dir] != NULL ) {
      trav->path[trav->top++] = trav->it;
      trav->it = trav->it->link[dir];
    }
  }

  if (ptr) {
    return trav->it == NULL ? NULL : &trav->it->data;
  } else {
    return trav->it == NULL ? NULL : trav->it->data;
  }
}

/**
  <summary>
  Traverse a red black tree in the user-specified direction
  <summary>
  <param name="trav">The initialized traversal object</param>
  <param name="dir">
  The direction to traverse (0 = ascending, 1 = descending)
  </param>
  <returns>
  A pointer to the next data value in the specified direction
  </returns>
  <remarks>For jsw_rbtree.c internal use only</remarks>
*/
static void *move ( jsw_rbtrav_t *trav, int dir, int ptr )
{
  if ( trav->it->link[dir] != NULL ) {
    /* Continue down this branch */
    trav->path[trav->top++] = trav->it;
    trav->it = trav->it->link[dir];

    while ( trav->it->link[!dir] != NULL ) {
      trav->path[trav->top++] = trav->it;
      trav->it = trav->it->link[!dir];
    }
  }
  else {
    /* Move to the next branch */
    jsw_rbnode_t *last;

    do {
      if ( trav->top == 0 ) {
        trav->it = NULL;
        break;
      }

      last = trav->it;
      trav->it = trav->path[--trav->top];
    } while ( last == trav->it->link[dir] );
  }

  if (ptr) {
    return trav->it == NULL ? NULL : &trav->it->data;
  } else {
    return trav->it == NULL ? NULL : trav->it->data;
  }
}

/**
  <summary>
  Initialize a traversal object to the smallest valued node
  <summary>
  <param name="trav">The traversal object to initialize</param>
  <param name="tree">The tree that the object will be attached to</param>
  <returns>A pointer to the smallest data value</returns>
*/
void *jsw_rbtfirst ( jsw_rbtrav_t *trav, jsw_rbtree_t *tree )
{
  return start ( trav, tree, 0, 0 ); /* Min value */
}

void *jsw_rbtfirstptr ( jsw_rbtrav_t *trav, jsw_rbtree_t *tree )
{
    return start ( trav, tree, 0, 1 ); /* Min value */
}

/**
  <summary>
  Initialize a traversal object to the largest valued node
  <summary>
  <param name="trav">The traversal object to initialize</param>
  <param name="tree">The tree that the object will be attached to</param>
  <returns>A pointer to the largest data value</returns>
*/
void *jsw_rbtlast ( jsw_rbtrav_t *trav, jsw_rbtree_t *tree )
{
  return start ( trav, tree, 1, 0 ); /* Max value */
}

/**
  <summary>
  Traverse to the next value in ascending order
  <summary>
  <param name="trav">The initialized traversal object</param>
  <returns>A pointer to the next value in ascending order</returns>
*/
void *jsw_rbtnext ( jsw_rbtrav_t *trav )
{
  return move ( trav, 1, 0 ); /* Toward larger items */
}

void *jsw_rbtnextptr ( jsw_rbtrav_t *trav )
{
    return move ( trav, 1, 1 ); /* Toward larger items (return ptr) */
}

/**
  <summary>
  Traverse to the next value in descending order
  <summary>
  <param name="trav">The initialized traversal object</param>
  <returns>A pointer to the next value in descending order</returns>
*/
void *jsw_rbtprev ( jsw_rbtrav_t *trav )
{
  return move ( trav, 0, 0 ); /* Toward smaller items */
}

corto_bool jsw_rbtchanged( jsw_rbtrav_t *trav ) {
  return trav->changes != trav->tree->changes;
}
