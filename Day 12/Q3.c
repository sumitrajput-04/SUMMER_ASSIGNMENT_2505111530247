#include <stdio.h>
void f(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    f(n);
    return 0;
}