/* This is a managed file. Do not delete this comment. */

#include <create_self_package>


/* Enter code outside of main here. */

int cortomain(int argc, char *argv[]) {

    corto_object o = corto_create(root_o, "create_self_package", corto_package_o);
    if (!o) {
        goto error;
    }

    return 0;
error:
    return -1;
}
