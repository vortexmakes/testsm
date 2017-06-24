/**
 *  \file   test_InyectorControlAct_runner.c
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
#include "unity_fixture.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Local functions ---------------------------- */
/* ---------------------------- Global functions --------------------------- */
TEST_GROUP_RUNNER(Behavior)
{
	RUN_TEST_CASE(Behavior, SetInitialValuesAfterInit);
	RUN_TEST_CASE(Behavior, SetDutyTo50ForAWhileOnStart);
	RUN_TEST_CASE(Behavior, CheckPressedThrottle);
	RUN_TEST_CASE(Behavior, SetDutyLinearlyWithThrottle);
	RUN_TEST_CASE(Behavior, IncrementDutyForColdEngine);
}

/* ------------------------------ End of file ------------------------------ */
