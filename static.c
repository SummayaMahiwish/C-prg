#include<stdio.h>
static int c=24;
static int add();
int main()
{
	static int a=25;
	a++;
	printf("a = %d\n", a);
	fun();
	fun();
	fun();
	add();
	add();
	add();
	
}

void fun()
{	
	int b=2;
	
	b++;
	printf("b = %d\n",b);
	c++;
	printf("c = %d\n", c);
	
}

static int add()
{
	int d=5,f=1;
	d++, ++f;
	printf("d = %d\t f = %d\n", d, f);
}	
