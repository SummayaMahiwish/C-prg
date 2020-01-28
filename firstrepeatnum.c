#include<stdio.h>
void main()
{
int arr[5];
int i,j,element,index;
for(i=0;i<5;i++)
{
printf("enter arr[%d]",i);
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
	if(arr[i]==arr[j])
	{
	element=arr[j];
	index=j;
	}
	}
}
if(index!=-1)
printf("first repeated num:%d element,%d index",element,index);
}
