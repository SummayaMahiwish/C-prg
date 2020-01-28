#include<stdio.h>
void main()
{
int arr[8]={3,4,5,6,3,4,4,5},freq[8];
int i,j,count;
for(i=0;i<8;i++)
{
count=1;
	for(j=i+1;j<8;j++)
	{
	if(arr[i]==arr[j])	
	{
	count++;
	freq[j]=0;
	}
	}
	if(freq[i]!=0)
	{
	freq[i]=count;
	}
	printf("freq of all elements");
		for(i=0;i<8;i++)
		{
		if(freq[i]!=0)
		{

		printf("%d element of %d times",arr[i],freq[i]);
		}
		}
}		
}
