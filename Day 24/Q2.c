#include <stdio.h>
#include <string.h>

void comp(char *s) {
    int len = strlen(s);
    if (len == 0) return;

    printf("Compressed string: ");
    for (int i = 0; i < len; i++) {
        int c = 1;
        while (i < len - 1 && s[i] == s[i + 1]) {
            c++;
            i++;
        }
        printf("%c%d", s[i], c);
    }
    printf("\n");
}

int main() {
    char s[100];

    printf("Enter a string to compress: ");
    scanf("%s", s);

    comp(s);

    return 0;
}