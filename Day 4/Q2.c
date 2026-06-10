#include <stdio.h>
int main()
{
    int p, q = 0, r = 1, s;
    printf("Enter the number :");
    scanf("%d", &p);
    if (p == 0)
        printf("%d", q);
    else if (p == 1)
        printf("%d", r);
    else
    {
        for (int i = 2; i <= p; i++)
        {
            s = q + r;
            q = r;
            r = s;
        }
        printf("%d", r);
    }
    return 0;
}
