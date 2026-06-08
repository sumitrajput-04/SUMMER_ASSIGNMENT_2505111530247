#include <stdio.h>
int main()
{
    int a, prod = 1;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a != 0)
    {
        prod *= a % 10;
        a /= 10;
    }
    printf("The product of the digits is %d",prod);
    return 0;
}