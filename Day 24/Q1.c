#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRot(char *s1, char *s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 != l2) return 0;

    char *tmp = (char *)malloc(sizeof(char) * (l1 * 2 + 1));
    strcpy(tmp, s1);
    strcat(tmp, s1);

    if (strstr(tmp, s2) != NULL) {
        free(tmp);
        return 1;
    }

    free(tmp);
    return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRot(s1, s2)) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are NOT rotations of each other.\n");
    }

    return 0;
}