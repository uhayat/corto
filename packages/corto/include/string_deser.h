/*
 * corto_string_deser.h
 *
 *  Created on: Sep 6, 2012
 *      Author: sander
 */

#ifndef CORTO_STRING_DESER_H_
#define CORTO_STRING_DESER_H_

#ifdef __cplusplus
extern "C" {
#endif

#define CORTO_STRING_DESER_TOKEN_MAX (1024) /* Specifies the maximum length for a token */

struct corto_indexInfo;

/* Deserializer data */
typedef struct corto_string_deser_t {
    /* Public */
    void *out;
    corto_object scope;
    corto_type type;
    corto_objectseq members; /* Custom list of members to deserialize */

    /* Private */
    corto_llIter_s iterData;
    corto_iter currentIter;
    corto_uint32 current;
    corto_ll index;
    corto_void* ptr;
    corto_ll anonymousObjects;
    corto_bool isObject;
    void* (*allocValue)(void *ptr, struct corto_string_deser_t *udata);
    void *allocUdata;
}corto_string_deser_t;

/* Deserialize string */
corto_string corto_string_deser(corto_string str, corto_string_deser_t* data);

#ifdef __cplusplus
}
#endif

#endif /* CORTO_STRING_DESER_H_ */
