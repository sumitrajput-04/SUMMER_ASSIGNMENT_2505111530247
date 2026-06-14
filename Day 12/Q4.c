#include <stdio.h>
int p(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum == n;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (p(n))
    {
        printf("Perfect number ");
    }
    else
    {
        printf("Not a perfect number ");
    }
    return 0;
}