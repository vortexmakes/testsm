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
	RUN_TEST_GROUP(Behavior);
}

/* ---------------------------- Global functions --------------------------- */
int
main(int argc, char *argv[])
{
    static char *args[8];
    int nArgs;

    args[0] = argv[0];
#if 0
    args[1] = "-g";
    args[2] = "";
    nArgs = 3;
#else
    nArgs = 1;
#endif

	UnityMain(nArgs, args, runAllTests);
    getchar();
}

/* ------------------------------ End of file ------------------------------ */
