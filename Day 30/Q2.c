#include <stdio.h>
#include <string.h>

int main() {
    char titles[3][50];
    int bookIds[3];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Book\n2. Display Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 3) {
                printf("Enter Book ID and Title: ");
                scanf("%d %s", &bookIds[count], titles[count]);
                count++;
            } else {
                printf("Library Full!\n");
            }
        } else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Title: %s\n", bookIds[i], titles[i]);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}