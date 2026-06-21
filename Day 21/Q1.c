#include <stdio.h>
int main()
{
    char str[100];
    int l = 0;

    printf("Enter String:");
    gets(str);
    while (str[l] != '\0')
        l++;
    printf("length = %d", l);
    return 0;
}