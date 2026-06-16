#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 1};
    int n = 7;
    int mFreq = 0, element;

    for(int i = 0; i < n; i++) {
        int c = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                c++;
        }

        if(c > mFreq) {
            mFreq = c;
            element = arr[i];
        }
    }

    printf("Element = %d\nFrequency = %d", element, mFreq);

    return 0;
}