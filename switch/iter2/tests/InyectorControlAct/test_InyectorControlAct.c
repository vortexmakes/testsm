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
#include "Mock_PWMInyector.h"
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
    Mock_PWMInyector_Init();
    Mock_Timer_Init();
}

TEST_TEAR_DOWN(Behavior)
{
    Mock_PWMInyector_Verify();
    Mock_Timer_Verify();
    Mock_PWMInyector_Destroy();
    Mock_Timer_Destroy();
}

TEST(Behavior, SetInitialValuesAfterInit)
{
    Timer *tmr = (Timer *)0xdeadbeef;

    PWMInyector_init_Expect();
    Timer_init_ExpectAndReturn(START_TIME, 0, evStartTimeout, tmr);

    InyectorControlAct_init();
}

TEST(Behavior, SetDutyTo50ForAWhileOnStart)
{
    Timer *tmr = (Timer *)0xdeadbeef;
    event.signal = evStart;

    Timer_start_Expect(tmr);
    Timer_start_IgnoreArg_me();
    PWMInyector_setDuty_Expect(START_DUTY);

    InyectorControlAct_starting(&event);
}

TEST(Behavior, SetDutyToMinForIdleSpeed)
{
    event.signal = evStartTimeout;

    PWMInyector_setDuty_Expect(IDLE_MIN_DUTY);

    InyectorControlAct_entryIdleSpeed(&event);
}

/* ------------------------------ File footer ------------------------------ */
