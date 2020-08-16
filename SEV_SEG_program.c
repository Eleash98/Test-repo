/***********************************************************************/
/* Author    : Ahmed Fawzy                                             */
/* Date      : 15 AUG 2020                                             */
/* Version   : V01                                                     */
/***********************************************************************/

#include 	"STD_TYPE.h"
#include 	"BIT_MATH.h"

#include 	"DIO_interface.h"
#include 	"DIO_private.h"

#include 	"SEV_SEG_interface.h"
#include 	"SEV_SEG_private.h"
#include 	"SEV_SEG_config.h"

void SEV_SEG_VoidDisplay(u8 Copy_u8Type, u8 Copy_u8Number)
{
	DIO_voidSetPinDirection(GPIOA , PIN0, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN1, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN2, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN3, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN4, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN5, SEV_SEG_MODE_SPEED);
	DIO_voidSetPinDirection(GPIOA , PIN6, SEV_SEG_MODE_SPEED);
	switch(Copy_u8Type)
	{
		case SEV_SEG_COM_CATHODE:
								switch(u8 Copy_u8Number) /* 01111111 = 0gfedcba */ 
								{
									case 0: 	/* 00111111 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x3F);
												break;
									case 1:		/* 00000011 */
												GPIOA_ODR &= ~(0x7F);

												break;
									case 2:		/* 01011011 */ 
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x5B);
												break;
									case 3:		/* 01001111 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x4F);
												break;
									case 4:		/* 01100110 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x66);
												break;
									case 5:		/* 01101101 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x6D);
												break;
									case 6:		/* 01111101 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x7D);
												break;
									case 7:		/* 00000111 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x07);
												break;
									case 8:		/* 01111111 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x7F);
												break;
									case 9:		/* 01101111 */
												GPIOA_ODR &= ~(0x7F);
												GPIOA_ODR |=  (0x6F);
												break;
									
								}
		case SEV_SEG_COM_ANAODE :
									switch(u8 Copy_u8Number) /* 10000000 = 0gfedcba */ 
								{
									case 0: 	/* 11000000 */
												GPIOA_ODR &= (0xC0);
												break;
									case 1:		/* 11111100 */
												GPIOA_ODR &= (0xFC);
												break;
									case 2:		/* 10100100 */
												GPIOA_ODR &= (0xA4);
												break;
									case 3:		/* 10110000 */
												GPIOA_ODR &= (0xD0);
												break;
									case 4:		/* 10011001 */ 
												GPIOA_ODR &= (0x99);
												break;
									case 5:		/* 10010010 */
												GPIOA_ODR &= (0x92);
												break;
									case 6:		/* 10000010 */
												GPIOA_ODR &= (0x82);
												break;
									case 7:		/* 11111000  */
												GPIOA_ODR &= (0xF8);
												break;
									case 8:		/* 10000000 */
												GPIOA_ODR &= (0x80);
												break;
									case 9:		/* 10010000 */
												GPIOA_ODR &= (0x90);
												break;
								}
	}
	
	
}
