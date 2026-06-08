#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
        /* code */
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}