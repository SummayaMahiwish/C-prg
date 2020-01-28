#include<stdio.h>
void main()
{
int arr[10];
int i,sum=0;
for(i=0;i<10;i++)
{
	printf("enter value arr[%d]",i);
	scanf("%d",&arr[i]);
	sum+=arr[i];
}
printf("sum=%d",sum);
return 0;
}	
