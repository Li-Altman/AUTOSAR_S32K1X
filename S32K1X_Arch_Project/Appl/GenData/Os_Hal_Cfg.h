/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_Cfg.h
 *   Generation Time: 2026-05-28 00:12:56
 *           Project: S32K1X_Arch - Version 1.0
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_HAL_CFG_H)                                                          /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2u)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (16u)

/* ISR core and level definitions */
# define OS_ISR_CANISR_0_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_0_BUSOFF_LEVEL     (60)
# define OS_ISR_CANISR_0_MB00TO15_CORE      (0)
# define OS_ISR_CANISR_0_MB00TO15_LEVEL     (61)
# define OS_ISR_CANISR_0_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_0_MB16TO31_LEVEL     (62)
# define OS_ISR_COUNTERISR_OSCOUNTER_CORE      (0)
# define OS_ISR_COUNTERISR_OSCOUNTER_LEVEL     (32)

/* Hardware counter timing macros */

/* Counter timing macros and constants: OsCounter */
# define OSMAXALLOWEDVALUE_OsCounter     (1073741823uL) /* 0x3FFFFFFFuL */
# define OSMINCYCLE_OsCounter            (1uL)
# define OSTICKSPERBASE_OsCounter        (80000uL)
# define OSTICKDURATION_OsCounter        (1000000uL)

/*! Macro OS_NS2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 1) + 500000) / 1000000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2NS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2NS_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_US2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 1) + 500) / 1000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2US_OsCounter was approximated with a deviation of 1.1102230246251565E-10ppm. */
# define OS_TICKS2US_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_MS2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 1) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2MS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2MS_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_SEC2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 1000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2SEC_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 500) / 1000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */







/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
