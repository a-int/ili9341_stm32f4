#pragma once

#define CS_PORT GPIOB
#define CS_PIN 1
#define RESET_PORT GPIOB
#define RESET_PIN 0
#define DC_PORT GPIOB
#define DC_PIN 2

extern void CS_L(void);
extern void CS_H(void);
extern void DC_L(void);
extern void DC_H(void);
extern void RESET_L(void);
extern void RESET_H(void);

void ili9341_reset(void);
void ili9341_softwareReset(void);
void ili9341_writeCmd(uint8_t cmd);
void ili9341_writeData(uint8_t data);
void ili9341_init(void);
