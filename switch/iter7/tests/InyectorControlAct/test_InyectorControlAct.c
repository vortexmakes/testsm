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
#include "Mock_RPMControl.h"
#include "Mock_TempSensor.h"
#include "Mock_RPMSensor.h"
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
    Mock_RPMControl_Init();
    Mock_TempSensor_Init();
    Mock_RPMSensor_Init();
    Mock_ThrottleSensor_Init();
    Mock_PWMInyector_Init();
    Mock_Sensor_Init();
    Mock_Timer_Init();
}

TEST_TEAR_DOWN(Behavior)
{
    Mock_RPMControl_Verify();
    Mock_TempSensor_Verify();
    Mock_RPMSensor_Verify();
    Mock_ThrottleSensor_Verify();
    Mock_PWMInyector_Verify();
    Mock_Sensor_Verify();
    Mock_Timer_Verify();
    Mock_RPMControl_Destroy();
    Mock_TempSensor_Destroy();
    Mock_RPMSensor_Destroy();
    Mock_ThrottleSensor_Destroy();
    Mock_PWMInyector_Destroy();
    Mock_Sensor_Destroy();
    Mock_Timer_Destroy();
}

TEST(Behavior, SetInitialValuesAfterInit)
{
    TempSensor *temp;
    RPMSensor *rpm;
    ThrottleSensor *throttle;
    Timer *tmr;

    TempSensor_init_ExpectAndReturn(temp);
    RPMSensor_init_ExpectAndReturn(rpm);
    ThrottleSensor_init_ExpectAndReturn(throttle);
    RPMControl_init_Expect(IDLE_MIN_DUTY, IDLE_MAX_DUTY, IDLE_RPM, 
                           IDLE_RPM_THH, IDLE_RPM_THL);
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

TEST(Behavior, SetDutyLinearlyWithThrottle)
{
    Sensor *sensor;
    int throttleValues[4] = {THROTTLE_MIN + 5, 
                             THROTTLE_MIN + 10,
                             THROTTLE_MIN + 20,
                             THROTTLE_MIN + 30};
    int *pThrottleValue;

    event.signal = evTick;

    for (pThrottleValue = throttleValues; 
         pThrottleValue < throttleValues + 4; 
         ++pThrottleValue)
    {
        Sensor_get_ExpectAndReturn(sensor, *pThrottleValue);
        Sensor_get_IgnoreArg_me();

        Sensor_get_ExpectAndReturn(sensor, 0);   /* Ignore temperature */
        Sensor_get_IgnoreArg_me();
        Sensor_get_ExpectAndReturn(sensor, 0);   /* Ignore RPM */
        Sensor_get_IgnoreArg_me();
        PWMInyector_setDuty_Expect(*pThrottleValue);

        InyectorControlAct_isPressedThrottle(&event);
        InyectorControlAct_onNormal(&event);
    }
}

TEST(Behavior, IncrementDutyForColdEngine)
{
    Sensor *sensor;
    unsigned char duty = THROTTLE_MIN + 20;

    event.signal = evTick;

    Sensor_get_ExpectAndReturn(sensor, duty);
    Sensor_get_IgnoreArg_me();

    Sensor_get_ExpectAndReturn(sensor, ENGINE_MIN_TEMP - 1);
    Sensor_get_IgnoreArg_me();
    Sensor_get_ExpectAndReturn(sensor, 0);   /* Ignore RPM */
    Sensor_get_IgnoreArg_me();
    PWMInyector_setDuty_Expect(duty + INC_DUTY_FOR_COLD);

    InyectorControlAct_isPressedThrottle(&event);
    InyectorControlAct_onNormal(&event);
}

/* ------------------------------ File footer ------------------------------ */
