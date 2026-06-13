#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int p, q;

    printf("Enter two numbers:");
    scanf("%d %d", &p, &q);
    printf("Maximum of %d and %d is %d", p, q, max(p, q));
    return 0;
}