#include <stdio.h>
int main (){
    int arr[] = {1,2,2,3,4,4,5};
    int n = 7;

    for(int i = 0; i<n; i++){
        int f = 0;

        for(int j = 0; j<i; j++){
            if(arr[i] == arr[j]){
                f = 1;
                break;
            }
        }
        if (f == 0)
        printf("%d",arr[i]);
    }
    return 0;
}