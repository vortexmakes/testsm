/**
 *  \file   all_tests.c
 */

/* -------------------------- Development history -------------------------- */
/*
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
#include <stdio.h>
#include "unity_fixture.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Local functions ---------------------------- */
static void 
runAllTests(void)
{
	RUN_TEST_GROUP(Structure);
}

/* ---------------------------- Global functions --------------------------- */
int
main(int argc, char *argv[])
{
    static char *args[8];
    int nArgs;

    args[0] = argv[0];
#if 1
    /* -v:                  enable/disable verbose */
    /* -g <group name>:     run the test group */
    /* -n <name filter>:    filter the test group */
    /* -r <n-times>:        repeat tests n-times */
    args[1] = "-g";
    args[2] = "Structure";
    args[3] = "-r";
    args[4] = "2";
    nArgs = 5;
#else
    nArgs = 1;
#endif

	UnityMain(nArgs, args, runAllTests);
    getchar();
}

/* ------------------------------ End of file ------------------------------ */
