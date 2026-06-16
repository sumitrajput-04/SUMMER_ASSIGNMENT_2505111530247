#include <stdio.h>

int main() {
    int a, i, temp;

    printf("Enter size: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter elements: ");
    for(i = 0; i < a; i++)
        scanf("%d", &arr[i]);

    temp = arr[0];

    for(i = 0; i < a - 1; i++)
        arr[i] = arr[i + 1];

    arr[a - 1] = temp;

    printf("Array after left rotation: ");
    for(i = 0; i < a; i++)
        printf("%d ", arr[i]);

    return 0;
}