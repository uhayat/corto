/* This is a managed file. Do not delete this comment. */

#include <corto>

int16_t corto_float_init(
    corto_float this)
{
    corto_primitive(this)->kind = CORTO_FLOAT;
    return corto_primitive_init((corto_primitive)this);
}

