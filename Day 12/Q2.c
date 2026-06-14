#include <stdio.h>
int a(int n)
{
    int s = 0, t = n, r;
    while (t > 0)
    {
        r = t % 10;
        s = s + r * r * r;
        t = t / 10;
    }
    return s == n;
}
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (a(n))
    {
        printf("Armstrong ");
    }
    else
    {
        printf("Not Armstrong ");
    }
    return 0;
}