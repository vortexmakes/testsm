/** 
 * \file ThrottleSensor.h 
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
#ifdef __THROTTLESENSOR_H__
#define __THROTTLESENSOR_H__
 
/* ----------------------------- Include files ----------------------------- */
/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* ------------------------------- Data types ------------------------------ */
typedef struct ThrottleSensor ThrottleSensor;

/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
ThrottleSensor *ThrottleSensor_init(void);
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
