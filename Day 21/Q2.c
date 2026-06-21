#include <stdio.h>
int main()
{
    char str[100];
    int i, l = 0;
    printf("Enter string:");
    gets(str);
    while (str[l] != '\0')
        l++;
    printf("Reversed string:");
    for (i = l - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}