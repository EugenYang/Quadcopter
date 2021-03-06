/*==============================================================================================*/
/*==============================================================================================*/
#include "stm32f4_system.h"
#include "stm32f4_i2c.h"
#include "module_l3g4200.h"
/*==============================================================================================*/
/*==============================================================================================*
**函數 : L3G4200_Init
**功能 : 初始化L3G4200
**輸入 : None
**輸出 : None
**使用 : L3G4200_Init()
**==============================================================================================*/
/*==============================================================================================*/
void L3G4200_Init( void )
{
	u8 L3G4200_Init_Data[6] = {
			0x8F,	/* L3G4200_CTRL_REG1	NormalMode, ODR:400Hz, CutOff:20, XYZEnable */
			0x00,	/* L3G4200_CTRL_REG2	*/
			0x08,	/* L3G4200_CTRL_REG3	*/
			0x00,	/* L3G4200_CTRL_REG4	Range:+-250dps */
			0x00,	/* L3G4200_CTRL_REG5	*/
			0x00	/* L3G4200_REFERENCE	*/
		};
	I2C_DMA_WriteReg(L3G4200_Init_Data,   L3G4200_I2C_ADDR, L3G4200_CTRL_REG1, 1);Delay_1ms(10);
	I2C_DMA_WriteReg(L3G4200_Init_Data+1, L3G4200_I2C_ADDR, L3G4200_CTRL_REG2, 1);Delay_1ms(10);
	I2C_DMA_WriteReg(L3G4200_Init_Data+2, L3G4200_I2C_ADDR, L3G4200_CTRL_REG3, 1);Delay_1ms(10);
	I2C_DMA_WriteReg(L3G4200_Init_Data+3, L3G4200_I2C_ADDR, L3G4200_CTRL_REG4, 1);Delay_1ms(10);
	I2C_DMA_WriteReg(L3G4200_Init_Data+4, L3G4200_I2C_ADDR, L3G4200_CTRL_REG5, 1);Delay_1ms(10);
	I2C_DMA_WriteReg(L3G4200_Init_Data+5, L3G4200_I2C_ADDR, L3G4200_REFERENCE, 1);Delay_1ms(10);
}
/*==============================================================================================*/
/*==============================================================================================*
**函數 : L3G4200_Read_Multiple
**功能 : 連續讀出ADXL345內部加速度數據，地址0x32~0x37
**輸入 : None
**輸出 : None
**使用 : L3G4200_Read_Multiple()
**==============================================================================================*/
/*==============================================================================================*/
// void L3G4200_Read_Multiple( void )
// {
// }
/*==============================================================================================*/
/*==============================================================================================*/
