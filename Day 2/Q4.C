#include <stdio.h>
int main(){ 
int n, p, r;
printf("Enter a number:");
scanf("%d", &n);
p = n;
while (p != 0)
{
    r = r*10 + p%10;
    p /= 10;
}
if (n == r)
{
    printf("The number is a palindrome");
}
else
{
    printf("The number is not a palindrome");
}
return 0;
}