/* Fast_StaticInitializer.h
 *
 * This file contains generated code. Do not modify!
 */

#ifndef Fast_StaticInitializer_H
#define Fast_StaticInitializer_H

#include "cortex.h"
#include "Fast_Initializer.h"
#include "Fast__type.h"

#include "Fast__api.h"

#include "Fast__meta.h"

#ifdef __cplusplus
extern "C" {
#endif

/* callback ::cortex::lang::class::construct(object object) -> ::cortex::Fast::StaticInitializer::construct(StaticInitializer object) */
cx_int16 Fast_StaticInitializer_construct(Fast_StaticInitializer object);

/* ::cortex::Fast::StaticInitializer::define() */
cx_int16 Fast_StaticInitializer_define(Fast_StaticInitializer _this);

/* ::cortex::Fast::StaticInitializer::push() */
cx_int16 Fast_StaticInitializer_push(Fast_StaticInitializer _this);

/* ::cortex::Fast::StaticInitializer::value(Expression v) */
cx_int16 Fast_StaticInitializer_value(Fast_StaticInitializer _this, Fast_Expression v);

#ifdef __cplusplus
}
#endif
#endif

