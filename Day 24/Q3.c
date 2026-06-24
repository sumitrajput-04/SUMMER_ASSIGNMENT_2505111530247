#include <stdio.h>
#include <string.h>

int main() {
    char sen[200], mx[50] = "", cur[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    while (sen[i] != '\0') {
        if (sen[i] != ' ') {
            cur[j++] = sen[i];
        } else {
            cur[j] = '\0';
            if (strlen(cur) > strlen(mx)) {
                strcpy(mx, cur);
            }
            j = 0;
        }
        i++;
    }
    
    cur[j] = '\0';
    if (strlen(cur) > strlen(mx)) {
        strcpy(mx, cur);
    }

    printf("Longest word: %s\n", mx);

    return 0;
}