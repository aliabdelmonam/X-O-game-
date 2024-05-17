#include "GPIO.h"
#include "GPIO_cfg.h"
Gpio_Configrations_t PortBconfg ={
	
	.portscfg[GPIO_PORT_B] = {
		
		.pinscfgs[GPIO_PIN_0] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_INPUT ,
				.pullup = GPIO_ENABLE ,
				.pulldown = GPIO_DISABLE ,
				.mask = GPIO_NOTMASK,
				.sense = GPIO_EDGE,
				.edge = GPIO_SINGLE_EDGE,
				.event = GPIO_FALLINGEDGE ,
				.alter_native_function =GPIO_DISABLE
				
		},
		.pinscfgs[GPIO_PIN_1] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_2] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_3] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_4] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_INPUT ,
				.pullup = GPIO_ENABLE ,
				.pulldown = GPIO_DISABLE ,
				.mask = GPIO_NOTMASK,
				.sense = GPIO_EDGE,
				.edge = GPIO_SINGLE_EDGE,
				.event = GPIO_FALLINGEDGE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_5] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE
			
		},
		.pinscfgs[GPIO_PIN_6] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE  ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_7] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
	}
};
	
Gpio_Configrations_t PortFconfg = {
.portscfg[GPIO_PORT_F] = {
		
		.pinscfgs[GPIO_PIN_0] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_INPUT ,
				.pullup = GPIO_ENABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_1] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL , 
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_2] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_3] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_OUTPUT ,
				.pullup = GPIO_DISABLE ,
				.pulldown = GPIO_DISABLE,
				.alter_native_function =GPIO_DISABLE

		},
		.pinscfgs[GPIO_PIN_4] = {
				.digitalanalogselect = GPIO_MODE_DIGITAL ,
				.pindirection = GPIO_DIR_INPUT ,
				.pullup = GPIO_ENABLE ,
				.pulldown = GPIO_DISABLE ,
				.alter_native_function =GPIO_DISABLE

		}


	}

	
};
