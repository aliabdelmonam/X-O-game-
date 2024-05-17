/*void SW1_Init(void);
void SW2_Init(void);
void PortB_Init(void);
void WaitForInterrupt(void);
*/

#include "GPIO_cfg.h"
typedef enum GPIO_ReT_e
{
	GPIO_RET_NOT_OK,
	GPIO_RET_OK
	
}Gpio_Ret_t;

typedef enum Gpio_port_e 
{
	GPIO_PORT_A,
	GPIO_PORT_B,
	GPIO_PORT_C,
	GPIO_PORT_D,
	GPIO_PORT_E,
	GPIO_PORT_F
	
}Gpio_port_t;

typedef enum Gpio_Pin_e
{

	GPIO_PIN_0,
	GPIO_PIN_1,
	GPIO_PIN_2,
	GPIO_PIN_3,
	GPIO_PIN_4,
	GPIO_PIN_5,
	GPIO_PIN_6,
	GPIO_PIN_7
	
}Gpio_Pin_t;
	
typedef enum DigitalAnalogSelect_e
{
	GPIO_MODE_DIGITAL,
	GPIO_MODE_ANALOG 
	
}DigitalAnalogSelect_t;

typedef enum Gpio_Direction_e
{
	GPIO_DIR_INPUT,
	GPIO_DIR_OUTPUT
	
}Gpio_Direction_t;

typedef enum GpioEnable_e
{
	GPIO_DISABLE,
	GPIO_ENABLE
	
}GpioEnable_t;
typedef enum GpioInterruptEdgeSense_e {
	GPIO_EDGE ,
	GPIO_LEVEL
}GpioInterruptEdgeSense_t;
typedef enum GpioInterruptBothEdge_e
{
	GPIO_SINGLE_EDGE,
	GPIO_BOTH_EDGE
}GpioInterruptBothEdge_t;
typedef enum GpioInterruptEvent_e
{
	GPIO_FALLINGEDGE , 
	GPIO_RISINGEDGE
}GpioInterruptEvent_t;
typedef enum GpioInterruptMask_e
{
	GPIO_MASK , 
	GPIO_NOTMASK
}GpioInterruptMask_t;
typedef struct Gpio_pinConfigrations_s
{	
	DigitalAnalogSelect_t digitalanalogselect;
	Gpio_Direction_t pindirection;
	GpioEnable_t pullup;
	GpioEnable_t pulldown;
	GpioEnable_t interrupt ;
	GpioEnable_t alter_native_function;
	GpioInterruptMask_t   mask;
	GpioInterruptEdgeSense_t sense ;
	GpioInterruptBothEdge_t edge; 
	GpioInterruptEvent_t event;
	
}Gpio_pinConfigrations_t;



typedef struct Gpio_PortConfigration_s
{
	Gpio_pinConfigrations_t pinscfgs[MAX_PINS_NUMBER];
	
}Gpio_PortConfigration_t;
typedef struct  Gpio_Configrations_e
{
	Gpio_PortConfigration_t portscfg[MAX_PORT_NUMBER];

}Gpio_Configrations_t;


Gpio_Ret_t GPIO_Init(Gpio_Configrations_t * Gpioconfg , Gpio_port_t portNum);
	
		

void WaitForInterrupt(void);
void EnableInterrupts(void);

extern Gpio_Configrations_t PortBconfg;
extern Gpio_Configrations_t PortFconfg;