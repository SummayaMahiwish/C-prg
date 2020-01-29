#include<stdio.h>
void main()
{
static int arr[][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
printf("%d/n",arr);//404
printf("%d/n",arr+0);//404
printf("%d/n",*arr);//404
printf("%d/n",arr+1);//412
printf("%d/n",arr+2);//420
printf("%d/n",*(arr+0));//404
printf("%d/n",*(arr+1));//412
printf("%d/n",*arr+5);//414
printf("%d/n",*(*(arr+2)+3));//426
printf("%d/n",*(*(arr+2)+3));//33
}
