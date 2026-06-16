#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter size:");
    scanf("%d", &n);

    int arr[n];

        printf("Enter the elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[n]);

    int l = arr[0];
    int s = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > l)
        {
            s = l;
            l = arr[i];
        }
        else if (arr[i] > s && arr[i] != l)
        {
            s = arr[i];
        }
    }

    printf("Secondary Largest = %d", s);
    return 0;
}