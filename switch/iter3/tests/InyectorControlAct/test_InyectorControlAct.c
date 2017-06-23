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
#include "Mock_ThrottleSensor.h"
#include "Mock_PWMInyector.h"
#include "Mock_Sensor.h"
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
    Mock_ThrottleSensor_Init();
    Mock_PWMInyector_Init();
    Mock_Sensor_Init();
    Mock_Timer_Init();
}

TEST_TEAR_DOWN(Behavior)
{
    Mock_ThrottleSensor_Verify();
    Mock_PWMInyector_Verify();
    Mock_Sensor_Verify();
    Mock_Timer_Verify();
    Mock_ThrottleSensor_Destroy();
    Mock_PWMInyector_Destroy();
    Mock_Sensor_Destroy();
    Mock_Timer_Destroy();
}

TEST(Behavior, SetInitialValuesAfterInit)
{
    ThrottleSensor *throttle;
    Timer *tmr;

    ThrottleSensor_init_ExpectAndReturn(throttle);
    PWMInyector_init_Expect();
    Timer_init_ExpectAndReturn(START_TIME, 0, evStartTimeout, tmr);

    InyectorControlAct_init();
}

TEST(Behavior, SetDutyTo50ForAWhileOnStart)
{
    Timer *tmr;
    event.signal = evStart;

    Timer_start_Expect(tmr);
    Timer_start_IgnoreArg_me();
    PWMInyector_setDuty_Expect(START_DUTY);

    InyectorControlAct_starting(&event);
}

TEST(Behavior, CheckPressedThrottle)
{
    bool result;
    Sensor *sensor;

    event.signal = evTick;

    Sensor_get_ExpectAndReturn(sensor, THROTTLE_MIN - 1);
    Sensor_get_IgnoreArg_me();

    result = InyectorControlAct_isPressedThrottle(&event);
    TEST_ASSERT_EQUAL(false, result);

    Sensor_get_ExpectAndReturn(sensor, THROTTLE_MIN);
    Sensor_get_IgnoreArg_me();

    result = InyectorControlAct_isPressedThrottle(&event);
    TEST_ASSERT_EQUAL(false, result);

    Sensor_get_ExpectAndReturn(sensor, THROTTLE_MIN + 1);
    Sensor_get_IgnoreArg_me();

    result = InyectorControlAct_isPressedThrottle(&event);
    TEST_ASSERT_EQUAL(true, result);
}

/* ------------------------------ File footer ------------------------------ */
