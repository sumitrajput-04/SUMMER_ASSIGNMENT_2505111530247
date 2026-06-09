#include <stdio.h>
int s(int a)
{
if (a==0)
return 0;
else
return (a%10)+s(a/10);
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of digits: %d", s(n));
return 0;
}