#include<stdio.h>
void main()
{
int a[5]={9,88,54,23,78};
int *p;
p=a+1;
printf("%d%d%d:",++*p,*p++,*++p);
}

