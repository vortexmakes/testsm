/**
 *  \file InyectorControl.c
 */
 
/* -------------------------- Development history -------------------------- */
/*
 *  2017.06.20  LeFr  v2.4.05  Initial version
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
#include "InyectorControl.h"
#include "InyectorControlAct.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
static int state;

/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Global functions --------------------------- */
void 
InyectorControl_init(void)
{
    state = off; 
    InyectorControlAct_init();
}

int
InyectorControl_dispatch(Event *event)
{
    switch (state)
    {
        case off:
            if (event->signal == evStart)
            {
                InyectorControlAct_starting(event);
                state = starting;
            }
            break;
        case starting:
            if (event->signal == evStartTimeout)
            {
                state = idleSpeed;
            }
            break;
        case idleSpeed:
            if (event->signal == evTick)
            {
                if (isReleasedThrottle())
                {
                    InyectorControlAct_onIdleSpeed(event);
                }
                else
                {
                    state = normal;
                }
            }
            break;
        case normal:
            if (event->signal == evTick)
            {
                if (isPressedThrottle())
                {
                    InyectorControlAct_onNormal(event);
                }
                else
                {
                    state = idleSpeed;
                }
            }
            break;
        default:
            break;
    }
    return state;
}

void 
InyectorControl_setState(int currState)
{
    state = currState;
}

int 
InyectorControl_getState(void)
{
    return state;
}

/* ------------------------------ File footer ------------------------------ */
