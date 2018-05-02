#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD=0xff;
	PORTD=0xff;
	uint8_t A=0b00000001;
	
	while (1)
	{
		for(int i=0;i<7;i++){
			PORTD=~A;
			_delay_ms(300);
			A=(A<<1);
		}
		for(int i=0;i<7;i++){
			PORTD=~A;
			_delay_ms(300);
			A=(A>>1);
		}
	}
}
