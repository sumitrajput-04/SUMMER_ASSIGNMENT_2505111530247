#include <stdio.h>
int main (){
    int a, c=0;
    printf(" Enter a number;");
    scanf("%d", &a);

    while (a >0){
        if (a % 2 == 1)
        c++;
        a = a / 2;
    }
    printf (" Number of set bits is %d", c);
    return 0;
}