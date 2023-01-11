#include<stdio.h>
struct s{
int data;  //4
float size; //4
char alpha; //4
};

int main()
{
	//struct s;
	printf("%d", sizeof(struct s));
}


