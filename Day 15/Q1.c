#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter size:");
        scanf("%d", &a);

    int arr[a];
    printf("Enter elements:");
    for (i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    printf("Reversed array:");
    for (i = a - 1; i>= 0; i--)
        printf("%d", arr[i]);

    return 0;
}