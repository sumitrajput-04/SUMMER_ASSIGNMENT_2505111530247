#include <stdio.h>


int main() {
    int a, b, n, t, rem, sum;

    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    for(n = a; n <= b; n++) {
        t = n;
        sum = 0;

        while(t > 0) {
            rem = t % 10;
            sum = sum + rem * rem * rem;
            t = t / 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}