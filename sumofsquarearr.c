#include<stdio.h>
void func(int n[]);
int main(void)
{
	int i,arr[5]={1,2,3,4,5};
	func(arr);
	printf("square of array");
	for(i=0;i<5;i++)
	{
	printf("%d",arr[i]);
	}
}
void func(int n[])
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		n[i]=n[i]*n[i];
		sum+=n[i];		
	}
	printf("sum of square %d",sum);
}
