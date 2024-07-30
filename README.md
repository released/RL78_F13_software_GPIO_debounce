# RL78_F13_software_GPIO_debounce
 RL78_F13_software_GPIO_debounce

udpate @ 2024/07/30

1. initial G16 EVB , to test below function 

- UART : P15:TXD0, P16:RXD0

- BUTTON : BTN1:P90 , BTN2:P91 , BTN3:P92 , BTN4:P93 , BTN5:P94 , BTN6:P95 , BTN7:P96 , BTN8:P97

2. all button with extern pull high

3. Scenario : 

- use timer to detect GPIO 

- under btn_timer_irq in Timer_1ms_IRQ , when button pressed as low will trigger TIMER counting 

- when pressed button as low per 10 ms , will shift 1 bit 

- when over 80ms (ButtonDebounceState will be 0xFF) , regard as this button is SHORT pressed and NOT RELEASED

- when pressed over 1500ms , regard as this button is LONG pressed and NOT RELEASED

- under while loop , print message when button SHORT pressed or LONG pressed

4. below is the log capture 

![image](https://github.com/released/RL78_F13_software_GPIO_debounce/blob/main/log.jpg)

