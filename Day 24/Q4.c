#include <stdio.h>
#include <string.h>

void rem(char *s) {
    int len = strlen(s);
    int idx = 0;

    for (int i = 0; i < len; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                break;
            }
        }
        if (j == i) {
            s[idx++] = s[i];
        }
    }
    s[idx] = '\0';
}

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    rem(s);
    printf("String after removing duplicates: %s\n", s);

    return 0;
}