#include<stdio.h>
void main()
{
int arr[5],i,t,max=0;
	for(i=0;i<5;i++)
	{
	printf("enter value arr[%d]",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(max<arr[i])
		{
		t=max;	
		max=arr[i];
		continue;
		}
		 if(t<arr[i])
		{
		t=arr[i];
		}
	}
printf("second max:%d",t);
	
}

