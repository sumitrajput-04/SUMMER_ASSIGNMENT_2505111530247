#include <stdio.h>
int main()
{
    int n, a, i, j;
    printf("Enter the  numbers:");
    scanf("%d%d", &a, &n);
    for (i = a; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
