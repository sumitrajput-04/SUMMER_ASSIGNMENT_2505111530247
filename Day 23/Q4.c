#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 1;

        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > max) {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c", maxChar);

    return 0;
}