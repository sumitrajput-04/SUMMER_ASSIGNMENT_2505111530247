#include <stdio.h>

int main()
{
    int a[100], n;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array elements: ");

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return  0;
}