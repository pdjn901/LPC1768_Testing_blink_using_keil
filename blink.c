#include<lpc214x.h>

unsigned int delay;

int main(void)
{
	PINSEL0 = 0x0000000;
	IO0DIR = 0x00003C00;
	
	while(1){
		IO0CLR = 0x00003C00;
		for(delay=0; delay<500000; delay++);
		IO0SET = 0x00003C00;
		for(delay=0;delay<500000; delay++);
		
	}


}