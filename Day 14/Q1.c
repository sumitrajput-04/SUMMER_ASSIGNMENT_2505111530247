#include <stdio.h>
int main()
{
    int n, b, i, d = 0;

    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter elements to seach:");
    scanf("%d", &b);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == b)
        {
            printf("Element founf at index %d", i);
            d = 1;
            break;
        }
    }

    if (d == 0)
    {
        printf("Element not found");
    }
    return 0;
}