#include <stdio.h>
int main()
{
    int arr[] = {1,4,5,6,8};
    int n = 5, s = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            printf("Pair: %d %d\n", arr[i], arr[j]);
        }
    }
    return 0;
}