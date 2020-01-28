#include<stdio.h>
void main()
{
int arr[8]={2,5,3,5,3,4,5,7};
int n=sizeof(arr)/sizeof(arr[0]);
int k=8,i;
int max,result;
for(i=0;i<n;i++)
{
arr[arr[i]%k]+=k;
max=arr[0],result=0;
	for(i=1;i<n;i++)
	{
	if(arr[i]>max)
	{
	max=arr[i];
	result=1;
	}
	}
}
printf("max repeating:%d",result);
}
