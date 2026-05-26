#include "Platform_Types.h"
#include "Mcu.h"
#include "Mcu_Cfg.h"
#include "Port.h"
#include "Port_Cfg.h"
#include "Dio.h"
#include "Port_Cfg.h"

static uint8 iDioWriteChannelFlg_Dbg = 0U;

int main(void)
{
    /* Mcu Module Init */
    Mcu_Init(&McuModuleConfiguration);
    Mcu_InitClock(McuConf_McuClockSettingConfig_McuClockSettingConfig_0);
    while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
    {
        /* code */
    }
    Mcu_DistributePllClock();

    /* Port Module Init */
    Port_Init(&PortConfigSet);

    /* main */
    while (1)
    {
        /* Dio Module use */
        if (iDioWriteChannelFlg_Dbg == 0U)
        {
            Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTE20, STD_LOW);
            Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTE21, STD_HIGH);
            // iDioWriteChannelFlg_Dbg = 1U;
        }
        else
        {
            Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTE20, STD_HIGH);
            Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTE21, STD_LOW);
            // iDioWriteChannelFlg_Dbg = 0U;
        }
    }

    return 0;
}