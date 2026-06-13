#include <stdio.h>

int main()
{
    int x, a, i;
    long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (a): ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %ld", x, a, result);

    return 0;
}