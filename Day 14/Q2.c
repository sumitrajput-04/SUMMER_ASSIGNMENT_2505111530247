#include <stdio.h>
int main()
{
    int n, b, i, c = 0;

    printf("Enter size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("enter elements:");
    scanf("%d", &b);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == b)
            c++;
    }
    printf("Frequency = %d", c);

    return 0;
}