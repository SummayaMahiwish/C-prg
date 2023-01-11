#include<stdio.h>
int main()
{
	int x=100;
	x=((x&0x0f)<<4)|((x&0xf0))>>4;
	printf("%d\n",x);
	
	
	int y= 0x1234;
	y=((y<<8)&0xff00)|((y>>8)&0x00ff);
	printf("%04x", y);
	







	}
	
	
