#include<stdio.h>
void main()
{
int a[]={4,14,24,34};
int b[]={6,16,26,36};
int c[]={9,19,29,39};
int *ptr[3];
//int **ptr;
int **pptr;
int i;
ptr[0]=a;
ptr[1]=b;
ptr[2]=c;
pptr=ptr;
for(i=1;i<=3;i++)
{
*pptr+=i;
**pptr+=i;
++pptr;
}
--pptr;
printf("%d\n",**pptr);
for(i=0;i<4;i++)
printf("%d%d%d\n",a[i],b[i],c[i]);
}


