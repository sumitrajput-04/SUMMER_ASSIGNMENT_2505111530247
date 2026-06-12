#include <stdio.h>
int main()
{
    int a, i, l = 0;
    printf("Enter a number:");
    scanf("%d", &a);

    for (i = 2; i <= a; i++)
    {
        while (a % i == 0)
        {

            l = i;
            a /= i;
        }
    }
    printf("Largest prime factor is: %d", l);
    return 0;
}