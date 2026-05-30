/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Os_Cfg.h
 *        Config:  S32K1X_Arch.dpa
 *   ECU-Project:  BCM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define RunTask_OsCore0 (0U)

/* Alarms */
# define Rte_Al_TE2_RunTask_OsCore0_0_10ms (0U)
# define Rte_Al_TE2_RunTask_OsCore0_0_20ms (1U)
# define Rte_Al_TE_BswM_BswM_MainFunction (2U)

/* Events */
# define Rte_Ev_Cyclic2_RunTask_OsCore0_0_10ms (0x01)
# define Rte_Ev_Cyclic2_RunTask_OsCore0_0_20ms (0x02)
# define Rte_Ev_Run_BswM_BswM_MainFunction (0x04)

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
