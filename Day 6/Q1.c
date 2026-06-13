#include <stdio.h>
int main()
{
    int a, b[32], i = 0;
    printf("Enter the decimal number:");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Binary = 0");
        return 0;
    }
     while (a > 0)
        {
            b[i] = a % 2;
            a = a / 2;
            i++;
        }
        printf("Binary of the given number is:");
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", b[i]);
        }
    
    return 0;
}