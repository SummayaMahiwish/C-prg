#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *p,i,n;
	printf("enter size of memory");
	scanf("%d",&n);
	//p = (int *)calloc(n, sizeof(int));
	p = (int *)malloc(n * sizeof(int));
	if(p==NULL)
	{
	printf("EMPTY MEMORY");
	exit(0);
	}
	printf("initial vales in the memory");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	printf(" values in the memory\n");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	free(p);
	p=NULL;
	
	
}	
