/*
*********************************************************************************************************
* @file    	bsp_i2c_bus.h
* @author  	SY
* @version 	V1.0.0
* @date    	2016-10-18 15:22:27
* @IDE	 	Keil V5.18.0.0
* @Chip    	STM32F407VE
* @brief   	I2C����ͷ�ļ�
*********************************************************************************************************
* @attention
*
* 
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Define to prevent recursive inclusion
*********************************************************************************************************
*/
#ifndef __BSP_I2C_BUS_H
#define __BSP_I2C_BUS_H

/*
*********************************************************************************************************
*                              				Exported Includes
*********************************************************************************************************
*/



/*
*********************************************************************************************************
*                              				Exported define
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported types
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                              				Exported constants
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported macro
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                              				Exported variables
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                              				Exported functions
*********************************************************************************************************
*/
void bsp_InitI2C_Bus( void );
void bsp_I2C_WriteReg( I2C_HandleTypeDef *handle, uint16_t regAddress, uint8_t *pData, uint16_t size );
void bsp_I2C_ReadReg( I2C_HandleTypeDef *handle, uint16_t regAddress, uint8_t *pData, uint16_t size );


#endif
/************************ (C) COPYRIGHT STMicroelectronics **********END OF FILE*************************/