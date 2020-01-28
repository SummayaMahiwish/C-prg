#include<stdio.h>
void main()
{
int arr[4],i=0,j,n;
printf("enter decimal");
scanf("%d",&n);
while(n>0)
{
	arr[i]=n%2;
	n/=2;
	i++;
}
printf("binary:");
	for(j=i-1;j>=0;j--)
	{
	printf("%d",arr[j]);

	}
return 0;
}

