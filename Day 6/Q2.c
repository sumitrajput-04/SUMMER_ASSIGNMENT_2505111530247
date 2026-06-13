#include <stdio.h>
int main()
{
    int bin, d = 0, b = 1, r;
    printf("Enter a binary number:");
    scanf("%d", &bin);

    while (bin > 0)
    {
        r = bin % 10;
        d = d + r * b;
        bin = bin * 2;
        bin = bin / 10;
    }
    printf(" Decimal =%d", d);
    return 0;
}