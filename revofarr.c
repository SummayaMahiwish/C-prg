#include<stdio.h>
void main()
{
int arr[5]={1,2,3,4,5};
int i,j,tmp;
for(i=0,j=4;i<j;i++,j--)
{
	tmp=arr[i];
	arr[i]=arr[j];
	arr[j]=tmp;
}
	for(i=0;i<5;i++)
	{
	printf("reverse of arr:%d\n",arr[i]);
	}
}
