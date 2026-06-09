#include <stdio.h>
int main (){
    int a,b,i,ans;
    printf("Enter two numbers:" );
    scanf("%d %d", &a, &b);
    for (i=1; i<=a && i<=b; i++){
        if (a%i==0 && b%i==0)
            ans=i;
    }
    printf("The GCD of %d and %d is %d", a, b, ans);
    return 0;   
}