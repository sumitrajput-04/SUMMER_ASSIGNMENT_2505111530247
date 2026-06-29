#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    printf("--- Menu-driven Calculator ---\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");

    while(1) {
        printf("\nEnter choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);

            switch(choice) {
                case 1:
                    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                    break;
                case 2:
                    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                    break;
                case 3:
                    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                    break;
                case 4:
                    if (num2 != 0) {
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                    } else {
                        printf("Error: Division by zero!\n");
                    }
                    break;
            }
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}