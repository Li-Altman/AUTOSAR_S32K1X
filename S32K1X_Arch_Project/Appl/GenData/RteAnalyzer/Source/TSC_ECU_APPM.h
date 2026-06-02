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
 *          File:  TSC_ECU_APPM.h
 *        Config:  S32K1X_Arch.dpa
 *   ECU-Project:  BCM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_ECU_APPM_Rte_Read_Sig_Light_1_Ctrl_Sig_Light_1_Ctrl(Sig_Light_1_Ctrl *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_ECU_APPM_Rte_Write_Sig_Light_1_Sts_Sig_Light_1_Sts(Sig_Light_1_Sts data);

/** Service interfaces */
Std_ReturnType TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetCurrentComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetMaxComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_GetRequestedComMode(ComM_ModeType *ComMode);
Std_ReturnType TSC_ECU_APPM_Rte_Call_UR_CN_N_CAN1_e2dd2bfb_RequestComMode(ComM_ModeType ComMode);




