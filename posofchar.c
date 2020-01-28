#include<stdio.h>
void main()
{
char s[10]="hello";
int i;
for(i=0;s[i]!='\0';i++)
{
	if(s[i]=='h')
	{
	printf("%d",i);
	}
	else if(s[i]=='\0')
	{
	printf("char not found");
	}
}

}
