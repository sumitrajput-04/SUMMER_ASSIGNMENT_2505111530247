#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice, i, len;

    printf("Enter an initial string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    while(1) {
        printf("\n--- String Operations System ---\n");
        printf("1. Reverse String\n2. Convert to Uppercase\n3. Check Length\n4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting system.\n");
            break;
        }

        len = strlen(str);

        switch(choice) {
            case 1:
                printf("Reversed String: ");
                for (i = len - 1; i >= 0; i--) {
                    putchar(str[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Uppercase: ");
                for (i = 0; i < len; i++) {
                    putchar(toupper(str[i]));
                }
                printf("\n");
                break;

            case 3:
                printf("Length of string: %d\n", len);
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}