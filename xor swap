/*swap without temporary variable*/
#include<stdio.h>
int main(void)
{
    int a = 5;
    int b = 6;
    a = (a + b) - (b = a);
    printf("%d\n",a);
    printf("%d\n",b);

    a^=b^=a^=b;
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}
