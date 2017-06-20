/** 
 * \file Timer.h 
 */

/* -------------------------- Development history -------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* --------------------------------- Module -------------------------------- */
#ifdef __TIMER_H__
#define __TIMER_H__

/* ----------------------------- Include files ----------------------------- */
/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* ------------------------------- Data types ------------------------------ */
typedef struct Timer Timer;

/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
Timer *Timer_init(int count, int period, int eventSignal);
void Timer_start(Timer *const me);
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
