#include<stdio.h>
void main()
{
int a[5]={6,16,26};
printf("%d",++*a); //7
printf("%d",++*(a+1));//17
printf("%d",++a[1]);//18
printf("%d%d%d%d",a[0],*(a+1),a[2],*(a+3));//7 18 26 0
}

