#include  <stdio.h>
int main()
{
    int a, i, b;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            b++;
        }
        if (b==2)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not a Prime Number");
        }

        return 0;
    }
}