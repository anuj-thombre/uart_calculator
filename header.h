#include<lpc21xx.h>

typedef unsigned char u8;
typedef unsigned int u32;

extern void uart0_init(u32 baud);
extern void uart0_tx(u8 data);
extern u8 uart0_rx(void);
extern void uart0_tx_string(char* p);
extern void uart0_rx_string(char* p, u8 maxlen);
extern void uart0_integer(int num);
extern void uart0_float(float num);

/*
extern delay_ms(u8 ms);
extern delay_sec(u8 sec);

extern void lcd_init(void);
extern void lcd_cmd(u8 cmd);
extern void lcd_data(u8 data);
*/
