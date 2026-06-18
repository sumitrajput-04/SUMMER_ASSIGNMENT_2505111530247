#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, flag = 1;

    printf("Enter matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}