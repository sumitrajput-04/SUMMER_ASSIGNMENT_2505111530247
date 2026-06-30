#include <stdio.h>

int main() {
    char names[3][50];
    int roll[3];
    float marks[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter Roll, Name, Marks for Student %d: ", i + 1);
        scanf("%d %s %f", &roll[i], names[i], &marks[i]);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", roll[i], names[i], marks[i]);
    }
    return 0;
}