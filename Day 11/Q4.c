#include <stdio.h>
int f(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Factorial of %d is %d", a, f(a));
    return 0;
}