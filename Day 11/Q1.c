#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int p, q;

    printf("Enter two numbers:");
    scanf("%d %d", &p, &q);
    printf("Sum of %d and %d is %d", p, q, sum(p, q));
    return 0;
}