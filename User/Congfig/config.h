/**
 * @file config.h
 * @author lez
 * @brief 工程配置文件
 * @version 0.1
 * @date 2024-07-1 0.1 24赛季定稿
 *
 * @copyright ZLLC 2024
 *
 */

#ifndef CONFIG_H
#define CONFIG_H

/* Includes ------------------------------------------------------------------*/

/* Exported macros -----------------------------------------------------------*/

//没定义Gimbal和Chassis，chraiot基本没用,good
//#define CHASSIS             //底盘连接了裁判系统和电机，与上板云台can通信
//#define GIMBAL

//作业使用,可失联云台下，单独调试电机
//#define Test_Chassis
#define Test_Gimbal




#ifdef CHASSIS 	

    #define POWER_LIMIT
    #ifdef POWER_LIMIT
        //#define POWER_LIMIT_BUFFER_LOOP 
        ///#define POWER_LIMIT_NEW_CONTROL
        #define POWER_LIMIT_OLD_CONTROL
    #endif

    //#define SPEED_SLOPE

#endif


/* Exported types ------------------------------------------------------------*/


/* Exported variables --------------------------------------------------------*/

/* Exported function declarations --------------------------------------------*/

#endif

/************************ COPYRIGHT(C) USTC-ROBOWALKER **************************/
