
#include "corto_create.h"
#include "corto_build.h"

static cx_int16 corto_setupProject(const char *name) {
	printf ("corto: create project '%s'\n", name);

    if (cx_fileTest(name)) {
        cx_id id;
        sprintf(id, "%s/.corto", name);
        if (cx_fileTest(id)) {
            cx_error("corto: a project with the name '%s' already exists!", name);
            goto error;
        }
    } else if (cx_mkdir(name)) {
        cx_error("corto: couldn't create project directory '%s' (check permissions)", name);
        goto error;
    }

	return 0;
error:
	return -1;
}

static cx_int16 corto_createRakefile(const char *projectKind, const char *name, const char *shortName) {
    FILE *file;
    cx_id buff;

    sprintf(buff, "%s/rakefile", shortName);
    file = fopen(buff, "w");
    if(!file) {
    	cx_error("corto: couldn't create %s/rakefile (check permissions)", buff);
        goto error;
    }

    fprintf(file, "\n");
    if (!strcmp(projectKind, CORTO_PACKAGE)) {
	    fprintf(file, "PACKAGE = '%s'\n\n", name);
	} else {
		fprintf(file, "TARGET = '%s'\n\n", name);
	}
    fprintf(file, "require \"#{ENV['CORTO_BUILD']}/%s\"\n\n", projectKind);
    fclose(file);

    return 0;
error:
    return -1;	
}

static char* corto_randomName(void) {
    char buffer[256];

    char *colors[] = {
        "Cayenne",
        "Maroon",
        "Orchid",
        "Magenta",
        "Tangerine", 
        "Salmon",
        "Lemon",
        "Clover",
        "Lime",
        "Teal",
        "Turquoise"};

    char *animals[] = {
        "Buffalo",
        "Eagle",
        "Lynx",
        "Porcupine",
        "Lizard",
        "Alpaca",
        "Lemming",
        "Armadillo",
        "Mongoose",
        "Gecko",
        "Beaver",
        "Owl",
        "Cat",
        "Emu",
        "Vulture",
        "Kangaroo",
        "Badger",
        "Hawk",
        "Baboon",
        "Otter",
        "Ibis",
        "Goose",
        "Lemur",
        "Hog",
        "Herring",
        "Sloth",
        "Peacock",
        "Koala",
        "Moose",
        "Tapir"
        };

    strcpy(buffer, colors[rand() % (sizeof(colors) / sizeof(char*))]);
    strcat(buffer, animals[rand() % (sizeof(animals) / sizeof(char*))]);

    return strdup(buffer);
}

static cx_int16 corto_application(int argc, char *argv[]) {
	cx_id buff;
	FILE *file;
	cx_bool isApplication = !strcmp(argv[0], "create") || !strcmp(argv[0], CORTO_APPLICATION);
	char *name;

	if (argc <= 1) {
        name = corto_randomName();
	} else {
        name = argv[1];
    }

	if (corto_setupProject(name)) {
		goto error;
	}

	if (corto_createRakefile(isApplication ? CORTO_APPLICATION : argv[0], name, name)) {
		goto error;
	}

	sprintf(buff, "%s/src", name);
	if (cx_mkdir(buff)) {
		cx_error("corto: couldn't create %s/src directory (check permissions)");
		goto error;
	}

	sprintf(buff, "%s/src/%s.c", name, name);
    file = fopen(buff, "w");
    if (file) {
        fprintf(file, "#include \"%s.h\"\n\n", name);
        fprintf(file, "int %sMain(int argc, char *argv[]) {\n\n", name); 
        fprintf(file, "    printf(\"Hello Corto!\\n\");\n\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");
        fclose(file);
    } else {
        cx_error("corto: couldn't create '%s' (check permissions)", buff);
        goto error;
    }

    if (cx_chdir(name)) {
    	cx_error("corto: can't change working directory to '%s' (check permissions)", buff);
    	goto error;
    }

    if (corto_build(0, NULL)) {
    	goto error;
    }

	printf("corto: done\n\n");

	return 0;
error:
	return -1;
}

static cx_int16 corto_package(int argc, char *argv[]) {
    cx_id cxfile, srcfile, srcdir;
    cx_char *ptr, *name;
    FILE *file;
    cx_uint32 i;
    cx_char *include = NULL;
    cx_uint32 optionsStartFrom = 1;
    cx_bool isEmpty = FALSE;

    if ((argc <= 1) || (*(argv[1])) == '-') {
        include = corto_randomName();
    } else {
        include = argv[1];
        optionsStartFrom = 2;
    }

    /* Ignore initial colons */
    if (include[0] == ':') {
        if (include[1] == ':') {
            include += 2;
        } else {
            cx_error("corto: invalid package name");
            goto error;
        }
    }

    /* Parse options */
    if (argc > optionsStartFrom) {
        if (!strcmp(argv[optionsStartFrom], "--empty")) {
            isEmpty = TRUE;
        } else {
            cx_error("corto: unknown option '%s'");
            goto error;
        }
    }

    /* Extract left-most name from include variable */
    ptr = include;
    name = include;
    for (i = 0; i < strlen(include); i++) {
        if (*ptr == ':') {
            name = ptr+1;
        }
        ptr++;
    }

   	if (corto_setupProject(name)) {
		goto error;
	}

	if (corto_createRakefile(CORTO_PACKAGE, include, name)) {
		goto error;
	}

    /* Write definition file */
    if (snprintf(cxfile, sizeof(cxfile), "%s/%s.cx", name, name) >= (int)sizeof(cxfile)) {
        cx_error("corto: package name '%s' is too long", name);
        goto error;
    }

    if (cx_fileTest(cxfile)) {
        cx_error("corto: package '%s' already exists", cxfile);
        goto error;
    }

    if (cx_mkdir(name)) {
        cx_error("corto: failed to create directory '%s' (check permissions)", name);
        goto error;
    }

    file = fopen(cxfile, "w");
    if (file) {
        fprintf(file, "#package ::%s\n\n", include);
        if (!isEmpty) {
            fprintf(file, "class RedPanda::\n");
            fprintf(file, "    weight: int32\n");
            fprintf(file, "    int16 construct()\n");
            fprintf(file, "    void chew()\n");
        }
        fclose(file);
    } else {
        cx_error("corto: failed to open file '%s' (check permissions)", cxfile);
        goto error;
    }

    /* Write class implementation */
    sprintf(srcdir, "%s/src", name);
    if (cx_mkdir(srcdir)) {
        cx_error("corto: failed to create directory '%s' (check permissions)", srcdir);
        goto error;
    }

    if (!isEmpty) {
        if (snprintf(srcfile, sizeof(srcfile), "%s/src/%s_RedPanda.c", name, name) >= (int)sizeof(srcfile)) {
            cx_error("corto: package name '%s' is too long", name);
            goto error;
        }

        if (cx_fileTest(srcfile)) {
            cx_error("corto: file '%s' already exists", srcfile);
            goto error;
        }

        file = fopen(srcfile, "w");
        if (file) {
            fprintf(file, "/* $begin(::%s::RedPanda::construct) */\n", include);
            fprintf(file, "    printf(\"Hurray, %%s the panda is born!\\n\", cx_nameof(_this));\n");
            fprintf(file, "    return 0;\n");
            fprintf(file, "/* $end */\n");
            fprintf(file, "/* $begin(::%s::RedPanda::chew) */\n", include);
            fprintf(file, "    _this->weight++;\n");
            fprintf(file, "    printf(\"%%s the panda is chewing on something omnomnom (his weight: %%d)\\n\",\n");
            fprintf(file, "            cx_nameof(_this), _this->weight);\n");
            fprintf(file, "/* $end */\n");
            fclose(file);
        } else {
            cx_error("corto: failed to open file '%s'", cxfile);
            goto error;
        }
    }

    /* Write main code */
    if (snprintf(srcfile, sizeof(srcfile), "%s/src/%s.c", name, name) >= (int)sizeof(srcfile)) {
        cx_error("corto: package name '%s' is too long", name);
        goto error;
    }

    if (cx_fileTest(srcfile)) {
        cx_error("corto: file '%s' already exists", srcfile);
        goto error;
    }

    file = fopen(srcfile, "w");
    if (file) {
        fprintf(file, "/* $begin(main) */\n\n");
        if (!isEmpty) {
            fprintf(file, "    /* Create Albert the panda */\n");
            fprintf(file, "    %s_RedPanda myFirstPanda = %s_RedPandaCreateChild(\n", name, name);
            fprintf(file, "            NULL,       /* Parent of the object (root) */\n");
            fprintf(file, "            \"Albert\",   /* Name of the object */\n");
            fprintf(file, "            10);        /* Albert's weight */\n\n");
            fprintf(file, "    /* Give Albert something to chew on */\n");
            fprintf(file, "    %s_RedPanda_chew(myFirstPanda);\n\n", name);
        }
        fprintf(file, "    return 0;\n");
        fprintf(file, "/* $end */\n");
        fclose(file);
    } else {
        cx_error("corto: failed to open file '%s' (check permissions)", srcfile);
        goto error;
    }

    if (cx_load(cxfile)) {
        cx_error("corto: failed to load '%s'", cxfile);
        goto error;
    }

    /* Change working directory */
    cx_chdir(name);

    if (corto_build(0, NULL)) {
        goto error;
    }

    printf("corto: done\n\n");

    return 0;
error:
	return -1;
}

cx_int16 corto_create(int argc, char *argv[]) {

	if (argc <= 1) {
        if (corto_application(argc-1, &argv[0])) {
            goto error;
        }
	} else 
	if (!strcmp(argv[1], CORTO_COMPONENT)) {
		if (corto_application(argc-1, &argv[1])) {
			goto error;
		}
	} else
	if (!strcmp(argv[1], CORTO_PACKAGE)) {
		if (corto_package(argc-1, &argv[1])) {
			goto error;
		}
	} else {
		if (corto_application(argc, &argv[0])) {
			goto error;
		}
	}

	return 0;
error:
	return -1;
}

void corto_createHelp(void) {
    printf("Usage: corto create\n");
    printf("Usage: corto create <name>\n");
    printf("Usage: corto create <command> <name>\n");
    printf("Usage: corto create <command>\n");
    printf("\n");
    printf("When no name is passed to create, corto will choose a random name.\n");
    printf("\n");
    printf("Commands:\n");
    printf("   app:           Create a new application project. An app is a standalone\n");
    printf("                  executable that links with the corto libraries. You can\n");
    printf("                  run your application by typing 'corto run' in the app directory\n");
    printf("   package:       Create a new package. Use when you're about to create\n");
    printf("                  functionality that must be shared between apps, or\n");
    printf("                  other packages.\n");
    printf("   component:     Create a new component. A component is a shared library\n");
    printf("                  that contains a cortomain function which is executed\n");
    printf("                  upon loading the library.\n");
    printf("\n");
}
