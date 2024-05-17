#include "tm4c123gh6pm.h"
#include "GPIO.h"

Gpio_Ret_t GPIO_Init(Gpio_Configrations_t * Gpioconfg , Gpio_port_t portNum)
{
	int pinNum = 0;
	if(portNum == GPIO_PORT_B)
	{
		SYSCTL_RCGC2_R |= (1 << portNum); // clock
		GPIO_PORTA_LOCK_R = 0x4C4F434B; // unlock
		for(pinNum;pinNum <MAX_PINS_NUMBER;pinNum++)
		{
			// comit register to allow change at this pin
				GPIO_PORTB_CR_R |=(1 << pinNum); 
			// set direction for this pin
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].pindirection == GPIO_DIR_INPUT)
				{
					GPIO_PORTB_DIR_R |= (1<<pinNum); // make this pin input
				}
				else 
				{
					GPIO_PORTB_DIR_R &= ~(1<<pinNum);
				}
				//set pin analog or digital
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].digitalanalogselect == GPIO_MODE_DIGITAL)
				{
					GPIO_PORTB_DEN_R |=(1 << pinNum);
				}
				else 
				{
					GPIO_PORTB_DEN_R &= ~(1 << pinNum);
				}
				// set pull up resistor
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].pullup == GPIO_ENABLE)
				{
					GPIO_PORTB_PUR_R |= (1 << pinNum);
				}
				else 
				{
					GPIO_PORTB_PUR_R &= ~(1 << pinNum);
				}
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].alter_native_function== GPIO_ENABLE)
				{
						GPIO_PORTF_AFSEL_R |=(1<<pinNum);
						GPIO_PORTF_PCTL_R |= (0xf << 4 *pinNum); 
				}
				else 
				{
						GPIO_PORTF_AFSEL_R  |= (1<<pinNum);
						GPIO_PORTF_PCTL_R &= ~(0xf << 4 *pinNum); 
				}
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].interrupt==GPIO_ENABLE)
				{
						GPIO_PORTB_IM_R |= (1<<pinNum); // arm interrupt
						GPIO_PORTF_ICR_R |=(1 << pinNum);
						if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].sense == GPIO_EDGE)
						{
							GPIO_PORTF_IS_R &= ~(1<<pinNum);
						}
						else 
						{
								GPIO_PORTF_IS_R |= (1<<pinNum);
						}
						if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].edge == GPIO_SINGLE_EDGE)
						{
								GPIO_PORTF_IBE_R &= ~(1 << pinNum);
						}
						else 
						{
								GPIO_PORTF_IBE_R |= (1 << pinNum);
						}
						if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].event == GPIO_FALLINGEDGE)
						{
								GPIO_PORTF_IEV_R &= ~(1 << pinNum);
						}
						else 
						{
								GPIO_PORTF_IEV_R |= (1 << pinNum);
						}
						
					NVIC_PRI0_R = (NVIC_PRI0_R&0xFFFFFF00)|0x000000A0; // (g) priority 5
					NVIC_EN0_R = 1 << 1;
					EnableInterrupts();
				}
			
		}
	}
	else if(portNum == GPIO_PORT_F)
	{
			SYSCTL_RCGC2_R |= (1 << portNum); // clock
		GPIO_PORTA_LOCK_R = 0x4C4F434B; // unlock
		for(pinNum;pinNum <MAX_PINS_NUMBER;pinNum++)
		{
			// comit register to allow change at this pin
				GPIO_PORTB_CR_R |=(1 << pinNum); 
			// set direction for this pin
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].pindirection == GPIO_DIR_INPUT)
				{
					GPIO_PORTB_DIR_R |= (1<<pinNum); // make this pin input
				}
				else 
				{
					GPIO_PORTB_DIR_R &= ~(1<<pinNum);
				}
				//set pin analog or digital
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].digitalanalogselect == GPIO_MODE_DIGITAL)
				{
					GPIO_PORTB_DEN_R |=(1 << pinNum);
				}
				else 
				{
					GPIO_PORTB_DEN_R &= ~(1 << pinNum);
				}
				// set pull up resistor
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].pullup == GPIO_ENABLE)
				{
					GPIO_PORTB_PUR_R |= (1 << pinNum);
				}
				else 
				{
					GPIO_PORTB_PUR_R &= ~(1 << pinNum);
				}
				if(Gpioconfg->portscfg[GPIO_PORT_B].pinscfgs[pinNum].alter_native_function== GPIO_ENABLE)
				{
						GPIO_PORTF_AFSEL_R |=(1<<pinNum);
						GPIO_PORTF_PCTL_R |= (0xf << 4 *pinNum); 
				}
				else 
				{
						GPIO_PORTF_AFSEL_R  |= (1<<pinNum);
						GPIO_PORTF_PCTL_R &= ~(0xf << 4 *pinNum); 
				}
			
			
		}
	}
	return GPIO_RET_OK;
}





