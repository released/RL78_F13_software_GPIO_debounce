/*_____ I N C L U D E S ____________________________________________________*/
// #include    <stdbool.h>

/*_____ D E C L A R A T I O N S ____________________________________________*/
#define bool  _Bool
/*_____ D E F I N I T I O N S ______________________________________________*/

#ifndef HIGH
#define HIGH              					            (1)
#endif

#ifndef LOW
#define LOW              					            (0)
#endif

#ifndef PRESSED
#define PRESSED              					        (1)
#endif

#ifndef RELEASED
#define RELEASED              					        (0)
#endif

// button , schematic : pull high
#define BTN1                                            (P9_bit.no0)
#define BTN2                                            (P9_bit.no1)
#define BTN3                                            (P9_bit.no2)
#define BTN4                                            (P9_bit.no3)
#define BTN5                                            (P9_bit.no4)
#define BTN6                                            (P9_bit.no5)
#define BTN7                                            (P9_bit.no6)
#define BTN8                                            (P9_bit.no7)


/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

void Timer_1ms_IRQ(void);

void delay_ms(unsigned int ms);

void UARTx_Process(unsigned char rxbuf);

void LED_Toggle(void);
void loop(void);

void RL78_soft_reset(unsigned char flag);
void hardware_init(void);
