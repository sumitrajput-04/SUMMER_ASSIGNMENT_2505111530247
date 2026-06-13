#include <stdio.h>
int pri(int a)
{
    int i;

    if (a <= 1)
        return 0;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (pri(n))
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}