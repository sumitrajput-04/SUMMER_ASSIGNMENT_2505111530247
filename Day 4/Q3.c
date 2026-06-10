#include <stdio.h>
int main (){
    int a, t, r, s=0;
    printf("Enter the number :");   
    scanf("%d", &a);
    
    t = a;
    while (t > 0){
        r = t % 10;
        s = s + r * r * r;
        t = t / 10;
    }
    if (s == a)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");
    return 0;
}