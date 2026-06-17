#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {6, 7, 8};
    int c[8], i;
    for (i = 0; i < 3; i++)
        c[i] = a[i];

    for (i = 0; i < 3; i++)
        c[5 + i] = b[i];

            printf("Merged Array:");
    for (i = 0; i < 8; i++)
        printf("%d",c[i]);

    return 0;
}