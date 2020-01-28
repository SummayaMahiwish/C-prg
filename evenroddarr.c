#include<stdio.h>
void main()
{
int arr[10],i,even=0,odd=0;
for(i=0;i<10;i++)
{
	printf("enter value arr[%d]",i);
	scanf("%d:",&arr[i]);
	if(arr[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	}
printf("even=%d odd=%d",even,odd);
return 0;
}
