/*******************************************************************************
 *				 _ _                                             _ _
				|   |                                           (_ _)
				|   |        _ _     _ _   _ _ _ _ _ _ _ _ _ _   _ _
				|   |       |   |   |   | |    _ _     _ _    | |   |
				|   |       |   |   |   | |   |   |   |   |   | |   |
				|   |       |   |   |   | |   |   |   |   |   | |   |
				|   |_ _ _  |   |_ _|   | |   |   |   |   |   | |   |
				|_ _ _ _ _| |_ _ _ _ _ _| |_ _|   |_ _|   |_ _| |_ _|
								(C)2022 Lumi
 * Copyright (c) 2022
 * Lumi, JSC.
 * All Rights Reserved
 *
 * File name: temparature_humidity_sensor.h
 *
 * Description:
 *
 * Author: CuongNV
 *
 * Last Changed By:  $Author: cuongnv $
 * Revision:         $Revision: $
 * Last Changed:     $Date: $Jun 7, 2022
 ******************************************************************************/
// Enclosing macro to prevent multiple inclusion
#ifndef SOURCE_MID_TEMPHUMI_SI7020_H_
#define SOURCE_MID_TEMPHUMI_SI7020_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "source/utils/typedefs.h"
/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

/******************************************************************************/
/*                              EXPORTED DATA                                 */
/******************************************************************************/

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
void initI2C(void);
void Si7020_Init (void);
bool_t Si7020_Measure (u32_t *pBuffer, u8_t byCommand, u8_t byLengthData);
u32_t Si7020_MeasureHumi (void);
u32_t Si7020_MeasureTemp (void);

/******************************************************************************/
#endif /* SOURCE_MID_TEMPHUMI_SI7020_H_ */

