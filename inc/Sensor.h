/** 
 * \file Sensor.h 
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
#ifdef __SENSOR_H__
#define __SENSOR_H__
 
/* ----------------------------- Include files ----------------------------- */
/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
/* -------------------------------- Constants ------------------------------ */
/* ------------------------------- Data types ------------------------------ */
typedef struct SensorVtbl SensorVtbl;
typedef struct Sensor Sensor;

struct Sensor
{
    const SensorVtbl *vptr;
    const char *type;
    int id;
    int value;
};

struct SensorVtbl
{
    int (*get)(Sensor *const me);
};

/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
int Sensor_get(Sensor *const me);
 
/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */
#endif
