#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

struct Item {
    char name[50];
    int qty;
};

int main() {
    struct Item inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice, i, found, qtyInput;
    char nameInput[50];

    while(1) {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add/Update Item\n2. View Inventory\n3. Check Item Stock\n4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting inventory system.\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter item name: ");
                scanf("%s", nameInput);
                printf("Enter quantity to add: ");
                scanf("%d", &qtyInput);

                found = -1;
                for (i = 0; i < itemCount; i++) {
                    if (strcasecmp(inventory[i].name, nameInput) == 0) {
                        found = i;
                        break;
                    }
                }

                if (found != -1) {
                    inventory[found].qty += qtyInput;
                    printf("Updated %s. Total Stock: %d\n", inventory[found].name, inventory[found].qty);
                } else {
                    if (itemCount < MAX_ITEMS) {
                        strcpy(inventory[itemCount].name, nameInput);
                        inventory[itemCount].qty = qtyInput;
                        printf("Added %s. Total Stock: %d\n", inventory[itemCount].name, inventory[itemCount].qty);
                        itemCount++;
                    } else {
                        printf("Inventory database limit reached!\n");
                    }
                }
                break;

            case 2:
                printf("\n--- Current Inventory ---\n");
                if (itemCount == 0) {
                    printf("Inventory is currently empty.\n");
                } else {
                    for (i = 0; i < itemCount; i++) {
                        printf("- %s: %d\n", inventory[i].name, inventory[i].qty);
                    }
                }
                break;

            case 3:
                printf("Enter item name to check: ");
                scanf("%s", nameInput);
                found = -1;
                for (i = 0; i < itemCount; i++) {
                    if (strcasecmp(inventory[i].name, nameInput) == 0) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) {
                    printf("Available stock for '%s': %d\n", inventory[found].name, inventory[found].qty);
                } else {
                    printf("Available stock for '%s': 0\n", nameInput);
                }
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}