#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("\n--- Library Record ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Book Name: %s\n", b.name);

    return 0;
}