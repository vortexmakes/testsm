/**
 *  \file test_InyectorControl.c
 */

/* -------------------------- Development history -------------------------- */
/*
 *  2017.06.21  LeFr  v1.0.00  Initial version
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
#include "unity_fixture.h"
#include "InyectorControlAct.h"
#include "Mock_Timer.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
TEST_GROUP(Behavior);

/* ---------------------------- Local variables ---------------------------- */
static Event event;

/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Local functions ---------------------------- */
/* ---------------------------- Global functions --------------------------- */
TEST_SETUP(Behavior)
{
    Mock_Timer_Init();
}

TEST_TEAR_DOWN(Behavior)
{
    Mock_Timer_Verify();
    Mock_Timer_Destroy();
}

TEST(Behavior, SetInitialValuesAfterInit)
{
    Timer *tmr = (Timer *)0xdeadbeef;

    Timer_init_ExpectAndReturn(START_TIME, 0, evStartTimeout, tmr);

    InyectorControlAct_init();
}

TEST(Behavior, SetDutyTo50ForAWhileOnStart)
{
    Timer *tmr = (Timer *)0xdeadbeef;
    event.signal = evStart;

    Timer_start_Expect(tmr);
    Timer_start_IgnoreArg_me();

    InyectorControlAct_starting(&event);
}

/* ------------------------------ File footer ------------------------------ */
