#include<stdio.h>
int r=0;
int rev(int n)
{
    if (n==0)
        return r;
    else
    {
        r=r*10+n%10;
        return rev(n/10);
    }
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The reverse of %d is %d", num, rev(num));
    return 0;
}