/**
 *  \file   test_InyectorControl_runner.c
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
TEST_GROUP_RUNNER(Structure)
{
	RUN_TEST_CASE(Structure, DefaultStateAfterInit);
	RUN_TEST_CASE(Structure, AnUnhandledEventDoesNotChangeState);
	RUN_TEST_CASE(Structure, StateTransitionTableForOff);
	RUN_TEST_CASE(Structure, StateTransitionTableForStarting);
	RUN_TEST_CASE(Structure, StateTransitionTableForIdleSpeed);
	RUN_TEST_CASE(Structure, StateTransitionTableForNormal);
}

/* ------------------------------ End of file ------------------------------ */
