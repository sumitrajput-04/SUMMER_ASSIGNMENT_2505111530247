#include <stdio.h>
int main()
{
    int a, p, i;
    printf("Ener a number:");
    scanf("%d", &a);
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {

            break;
        }
    }
    if (p == 0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}