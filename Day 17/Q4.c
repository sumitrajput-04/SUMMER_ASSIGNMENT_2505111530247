#include <stdio.h>
int main (){
    int a[]={10,20,30,40};
    int b[]={20,40,50,60};
    int i, j;

    printf("Common Elements:\n");

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(a[i]==b[j]){
                printf("%d", a[i]);
            }
        }
    }
    return 0;

}