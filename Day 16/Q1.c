#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5, s = 0;

    for (int i = 0; i < n - 1; i++)
        s += arr[i];

    int t = n * (n + 1) / 2;
    printf("Missing Number = %d", t - s);
    return 0;
}