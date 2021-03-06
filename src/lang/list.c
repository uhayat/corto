/* This is a managed file. Do not delete this comment. */

#include <corto>

int16_t corto_list_construct(
    corto_list this)
{
    corto_type(this)->flags |= CORTO_TYPE_HAS_RESOURCES;
    corto_type(this)->flags |= CORTO_TYPE_NEEDS_INIT;
    corto_type(this)->size = sizeof(ut_ll);
    corto_type(this)->alignment = CORTO_ALIGNMENT(ut_ll);
    corto_type element_type = corto_collection(this)->element_type;
    if (!element_type) {
        ut_error("no elementtype provided for list");
        goto error;
    }

    if (element_type->flags & CORTO_TYPE_HAS_REFERENCES ||
        element_type->reference)
    {
        corto_type(this)->flags |= CORTO_TYPE_HAS_REFERENCES;
    }

    return corto_type_construct(corto_type(this));
error:
    return -1;
}

int16_t corto_list_init(
    corto_list this)
{
    corto_collection(this)->kind = CORTO_LIST;
    return corto_collection_init(corto_collection(this));
}
