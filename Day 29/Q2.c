#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, i, found;

    while(1) {
        printf("\n--- Array Operations System ---\n");
        printf("1. Insert Element\n2. Delete Element\n3. Display Array\n4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting system.\n");
            break;
        }

        switch(choice) {
            case 1:
                if (size >= MAX_SIZE) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter integer to insert: ");
                    scanf("%d", &element);
                    arr[size] = element;
                    size++;
                    printf("%d added successfully.\n", element);
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter integer to delete: ");
                    scanf("%d", &element);
                    found = -1;
                    for (i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            found = i;
                            break;
                        }
                    }
                    if (found != -1) {
                        for (i = found; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("%d removed successfully.\n", element);
                    } else {
                        printf("Element not found in array.\n");
                    }
                }
                break;

            case 3:
                printf("Current Array: [");
                for (i = 0; i < size; i++) {
                    printf("%d", arr[i]);
                    if (i < size - 1) printf(", ");
                }
                printf("]\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}