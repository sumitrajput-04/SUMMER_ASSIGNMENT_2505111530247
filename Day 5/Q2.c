#include <stdio.h>

int main() {
    int n, t, rem, sum = 0, i, f;

    printf("Enter number: ");
    scanf("%d", &n);

    t = n;

    while(t > 0) {
        rem = t % 10;
        f = 1;

        for(i = 1; i <= rem; i++)
            f *= i;

        sum += f;
        t /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}