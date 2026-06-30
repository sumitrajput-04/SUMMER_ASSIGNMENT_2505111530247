#include <stdio.h>

int main() {
    char names[3][50];
    int empIds[3];
    float salaries[3];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 3) {
                printf("Enter ID, Name, Salary: ");
                scanf("%d %s %f", &empIds[count], names[count], &salaries[count]);
                count++;
            } else {
                printf("Database Full!\n");
            }
        } else if (choice == 2) {
            printf("\n--- Employee Records ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Salary: %.2f\n", empIds[i], names[i], salaries[i]);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}