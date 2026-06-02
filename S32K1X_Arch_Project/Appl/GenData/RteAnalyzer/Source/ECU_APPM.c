/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  ECU_APPM.c
 *        Config:  S32K1X_Arch.dpa
 *     SW-C Type:  ECU_APPM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <ECU_APPM>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ComM_ModeType
 *   
 *
 * Sig_Light_1_Ctrl
 *   
 *
 * Sig_Light_1_Sts
 *   
 *
 *********************************************************************************************************************/

#include "Rte_ECU_APPM.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_ECU_APPM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void ECU_APPM_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Sig_Light_1_Ctrl: Integer in interval [0...255]
 * Sig_Light_1_Sts: Integer in interval [0...255]
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 *
 *********************************************************************************************************************/


#define ECU_APPM_START_SEC_CODE
#include "ECU_APPM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ECU_APPM_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Sig_Light_1_Ctrl_Sig_Light_1_Ctrl(Sig_Light_1_Ctrl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Sig_Light_1_Sts_Sig_Light_1_Sts(Sig_Light_1_Sts data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetMaxComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetRequestedComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_N_CAN1_e2dd2bfb_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ECU_APPM_Runnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ECU_APPM_CODE) ECU_APPM_Runnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ECU_APPM_Runnable
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Sig_Light_1_Ctrl Read_Sig_Light_1_Ctrl_Sig_Light_1_Ctrl;

  ComM_ModeType Call_UR_CN_N_CAN1_e2dd2bfb_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_N_CAN1_e2dd2bfb_GetMaxComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_N_CAN1_e2dd2bfb_GetRequestedComMode_ComMode = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_ECU_APPM_Rte_Read_Sig_Light_1_Ctrl_Sig_Light_1_Ctrl(&Read_Sig_Light_1_Ctrl_Sig_Light_1_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ECU_APPM_Rte_Write_Sig_Light_1_Sts_Sig_Light_1_Sts(Rte_InitValue_Sig_Light_1_Sts_Sig_Light_1_Sts);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetCurrentComMode(&Call_UR_CN_N_CAN1_e2dd2bfb_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_ComM_UserRequest_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetMaxComMode(&Call_UR_CN_N_CAN1_e2dd2bfb_GetMaxComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_ComM_UserRequest_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetRequestedComMode(&Call_UR_CN_N_CAN1_e2dd2bfb_GetRequestedComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_ComM_UserRequest_E_NOT_OK:
      fct_error = 1;
      break;
  }

  fct_status = TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_ComM_UserRequest_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_ComM_UserRequest_E_NOT_OK:
      fct_error = 1;
      break;
  }

  ECU_APPM_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ECU_APPM_STOP_SEC_CODE
#include "ECU_APPM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void ECU_APPM_TestDefines(void)
{
  /* Enumeration Data Types */

  ComM_ModeType Test_ComM_ModeType_V_1 = COMM_NO_COMMUNICATION;
  ComM_ModeType Test_ComM_ModeType_V_2 = COMM_SILENT_COMMUNICATION;
  ComM_ModeType Test_ComM_ModeType_V_3 = COMM_FULL_COMMUNICATION;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
