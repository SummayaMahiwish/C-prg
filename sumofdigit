# include<stdio.h>

int sumOddDigits(int n);
int main(void)
{
    int number =  8135267;
    
    printf("%d" , sumOddDigits(number));
    
    system("Pause");
}

int sumOddDigits(int n)
{
    int sum = 0;
    
    if(n<10 && n%2!=0 )
    return n;
    
    if (n<10 && n%2 ==0)
    return 0;
    
    if(n%2 != 0)
    sum =  sumOddDigits(n/10) + n%10;
    else
   sum = sumOddDigits(n/10);
   
   return sum; 
}
