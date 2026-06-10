#include <stdio.h>
int main (){
    int z,a=0, b=1, c;
    printf("Enter the terms: ");
    scanf("%d", &z);
    printf("Fibonacci series: %d %d ", a, b);
    for(int i=2; i<z; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}