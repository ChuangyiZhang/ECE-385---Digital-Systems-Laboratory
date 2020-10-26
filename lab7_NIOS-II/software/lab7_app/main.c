// Main.c - makes LEDG0 on DE2-115 board blink if NIOS II is set up correctly
// for ECE 385 - University of Illinois - Electrical and Computer Engineering
// Author: Zuofu Cheng

int main()
{
	int i = 0;
	volatile unsigned int *LED_PIO = (unsigned int*)0x90; //make a pointer to access the PIO block
	volatile unsigned int *SW_PIO = (unsigned int*)0x80;
	volatile unsigned int *Reset_PIO = (unsigned int*)0x60;
	volatile unsigned int *Accumlate_PIO = (unsigned int*)0x70;
	*LED_PIO = 0; //clear all LEDs
	volatile unsigned int sum = 0;
	int pause = 0;

	while ( (1+1) != 3) //infinite loop
	{

	//	if(*Reset_PIO == 0x0  ){
	//		sum = 0;

	//	}


	//	if(*Accumlate_PIO == 0x1 && pause == 0){
	//		sum += *SW_PIO;
	//		pause =1;
	//	}

	 //   if(*Accumlate_PIO == 0x0)
	//		pause = 0;


	//	*LED_PIO = sum;

		for (i = 0; i < 100000; i++); //software delay
		*LED_PIO |= 0x1; //set LSB
		for (i = 0; i < 100000; i++); //software delay
		*LED_PIO &= ~0x1; //clear LSB
	}
	return 1; //never gets here
}