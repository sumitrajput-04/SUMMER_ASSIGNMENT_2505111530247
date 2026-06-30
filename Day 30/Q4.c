#include <stdio.h>

void inputData(char items[][50], int ids[], int *count) {
    if (*count < 3) {
        printf("Enter Item ID and Name: ");
        scanf("%d %s", &ids[*count], items[*count]);
        (*count)++;
    } else {
        printf("Inventory Full!\n");
    }
}

void displayData(char items[][50], int ids[], int count) {
    printf("\n--- Inventory Items ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s\n", ids[i], items[i]);
    }
}

int main() {
    char items[3][50];
    int ids[3];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Item\n2. View Items\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            inputData(items, ids, &count);
        } else if (choice == 2) {
            displayData(items, ids, count);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}