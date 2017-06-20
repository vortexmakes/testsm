/** 
 * \file InyectorControl.h 
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
/* --------------------------------- Module -------------------------------- */
#ifdef __INYECTORCONTROL_H__
#define __INYECTORCONTROL_H__
 
/* ----------------------------- Include files ----------------------------- */
/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* States */
enum
{
    off, starting, idleSpeed, normal
};
 
/* Event signals */
enum
{
    evStart, evTick, evStartTimeout
};
 
/* ------------------------------- Data types ------------------------------ */
typedef struct Event Event;
struct Event
{
    int signal;
};
 
/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
void InyectorControl_init(void);
int InyectorControl_dispatch(Event *event);
void InyectorControl_setState(int currState);
int InyectorControl_getState(void);
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
