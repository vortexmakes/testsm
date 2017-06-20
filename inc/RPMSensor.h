/** 
 * \file RPMSensor.h 
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
#ifdef __RPMSENSOR_H__
#define __RPMSENSOR_H__
 
/* ----------------------------- Include files ----------------------------- */
/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* ------------------------------- Data types ------------------------------ */
typedef struct RPMSensor RPMSensor;

/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
RPMSensor *RPMSensor_init(void);
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
