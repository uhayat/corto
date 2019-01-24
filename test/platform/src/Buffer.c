/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_Buffer_tc_append(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, "Foo");
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, "Foo");

}

void test_Buffer_tc_appendEmpty(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, "");
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, "");

}

void test_Buffer_tc_appendEmptyToExisting(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, "Foo");
    test_assert(proceed == TRUE);
    proceed = ut_strbuf_append(&b, "");
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, "Foo");

}

void test_Buffer_tc_appendLarge(
    test_Buffer this)
{
    /* Pick a size that doesn't align with buffer boundaries */
    char largeString[800];

    /* Use easy to recognize pattern */
    int i; for (i = 0; i < 799; i++) {
        if (i % 2) {
            largeString[i] = '.';
        } else {
            largeString[i] = '|';
        }
    }
    largeString[799] = '\0';

    ut_strbuf b = UT_STRBUF_INIT;
    corto_bool proceed = ut_strbuf_append(&b, largeString);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, largeString);

}

void test_Buffer_tc_appendLargeMulti(
    test_Buffer this)
{
    /* Pick a size that doesn't align with buffer and requires at least three
     * elements */
    char largeString[1400];

    /* Use easy to recognize pattern */
    int i; for (i = 0; i < 1399; i++) {
        if (i % 2) {
            largeString[i] = '.';
        } else {
            largeString[i] = '|';
        }
    }
    largeString[1399] = '\0';

    ut_strbuf b = UT_STRBUF_INIT;
    corto_bool proceed = ut_strbuf_append(&b, largeString);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, largeString);

}

void test_Buffer_tc_appendLargeOverflow(
    test_Buffer this)
{
    /* Pick a size that doesn't align with buffer boundaries and is larger than
     * an element. */
    char largeString[800];

    /* Use easy to recognize pattern */
    int i; for (i = 0; i < 799; i++) {
        switch (i % 2) {
        case 0: largeString[i] = '.'; break;
        case 1: largeString[i] = '|'; break;
        }
    }
    largeString[799] = '\0';

    ut_strbuf b = UT_STRBUF_INIT;
    corto_bool proceed = ut_strbuf_append(&b, "HelloWorld!");
    test_assert(proceed == TRUE);
    proceed = ut_strbuf_append(&b, largeString);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    char result[811];
    sprintf(result, "HelloWorld!%s", largeString);
    test_assertstr(str, result);

}

void test_Buffer_tc_appendNull(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, NULL);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str == NULL);

}

void test_Buffer_tc_appendNullToExisting(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, "Foo");
    proceed = ut_strbuf_append(&b, NULL);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, "Foo");

}

void test_Buffer_tc_appendOverflow(
    test_Buffer this)
{
    /* Pick a size that doesn't align with buffer boundaries, fits within an
     * element but requires the buffer to allocate a new element. */
    char largeString[505];

    /* Use easy to recognize pattern */
    int i; for (i = 0; i < 504; i++) {
        switch (i % 2) {
        case 0: largeString[i] = '.'; break;
        case 1: largeString[i] = '|'; break;
        }
    }
    largeString[504] = '\0';

    ut_strbuf b = UT_STRBUF_INIT;
    corto_bool proceed = ut_strbuf_append(&b, "HelloWorld!");
    test_assert(proceed == TRUE);
    proceed = ut_strbuf_append(&b, largeString);
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    char result[516];
    sprintf(result, "HelloWorld!%s", largeString);
    test_assertstr(str, result);

}

void test_Buffer_tc_appendToExisting(
    test_Buffer this)
{
    ut_strbuf b = UT_STRBUF_INIT;

    corto_bool proceed = ut_strbuf_append(&b, "Foo");
    proceed = ut_strbuf_append(&b, "Bar");
    test_assert(proceed == TRUE);

    corto_string str = ut_strbuf_get(&b);
    test_assert(str != NULL);
    test_assertstr(str, "FooBar");

}
