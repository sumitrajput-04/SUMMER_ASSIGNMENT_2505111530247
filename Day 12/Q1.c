#include <stdio.h>
int p(int n)
{
    int rev = 0, t = 0;

    while (t > 0)
    {
        rev = rev * 10 + t % 10;
        t = t / 10;
    }
    return rev == n;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (p(n))
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
}
