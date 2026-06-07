#include <stdio.h>
int main()
{
    int a, c = 0;
    printf("Enter a Number:");
    scanf("%d", &a);
    while (a != 0)
    {
        a = a / 10;
        c++;
    }
    printf("Number of Digits:%d",c);
    return 0;
}