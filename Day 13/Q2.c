#include <stdio.h>
int main()
{
    int a[100], n, s = 0;
    float av;

    printf("Enter size:");
    scanf("%d", &n);

    for(int i= 0; i< n; i++)
    {
        scanf("%d", &a[i]);
        s += a[i];
    }
    av = (float)s/n;

    printf("Sum = %d\n",s);
    printf("Average = %.2f",av);

    return 0;
}