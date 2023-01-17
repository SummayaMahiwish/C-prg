#include<stdio.h>

int main()
{
	int a[] = {1,3,5,7,6,8};
	int max = a[0];
	int size = sizeof(a)/sizeof(a[0]);
	
	for(int i=0; i < size; i++)
	{
		 if(a[i] > max)
		 {
		 	max = a[i];
		 }
	}
		 
		 printf("maximum element in array is %d", max);
	
}
