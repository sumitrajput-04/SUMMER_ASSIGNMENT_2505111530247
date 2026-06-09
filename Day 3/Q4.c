#include <stdio.h>
int main (){
    int x, y, ans;
    printf("Enter the two numbers;");
    scanf("%d %d",&x, &y);
    ans = (x > y) ? x : y;
    while (1){
        if (ans % x == 0 && ans % y == 0){
            printf("The LCM of %d and %d is %d", x, y, ans);
            break;
        }
        ans++;
    }
    return 0;
}