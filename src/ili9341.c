#include <llcm.h>
#include <usart.h>
#include <spi.h>
#include <ili9341.h>
int main(){
  initSW();
  init_clock_HSE(25,200,pllp_div2, AHB_div1, APB_div2, APB_div1);
  init_SysTick(1000);
  init_usart(USART1, eBaudRate115200);
  init_spi1_gpio(1, 0, 0);
  init_spi1_fullDuplex(0, 0, spiBaudRateDiv2, spiMaster, spiMsbfirst, spiDff8, spiHardwareSlaveManagement);

  // ili9341_init();
  
  while(1){}
  return 0;
}

inline void CS_L(void){
	CS_PORT->BSRR = (uint32_t)CS_PIN<< 16U;
}

inline void CS_H(void){
	CS_PORT->BSRR = CS_PIN;
}

inline void RESET_L(void){
	RESET_PORT->BSRR = (uint32_t)RESET_PIN << 16U;
}

inline void RESET_H(void){
	RESET_PORT->BSRR = RESET_PIN;
}

inline void DC_L(void){
	DC_PORT->BSRR = (uint32_t)DC_PIN << 16U;
}

inline void DC_H(void){
	DC_PORT->BSRR = DC_PIN;;
}
