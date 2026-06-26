#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi  2. Mumbai  3. Kolkata  4. Chennai\n");
    scanf("%d", &ans);
    if(ans == 1) score++;

    printf("Q2. 2 + 2 = ?\n");
    printf("1. 3  2. 4  3. 5  4. 6\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("Q3. C language was developed by?\n");
    printf("1. Dennis Ritchie  2. James Gosling  3. Bjarne Stroustrup  4. Guido\n");
    scanf("%d", &ans);
    if(ans == 1) score++;

    printf("Q4. Largest planet?\n");
    printf("1. Earth  2. Mars  3. Jupiter  4. Venus\n");
    scanf("%d", &ans);
    if(ans == 3) score++;

    printf("Q5. 5 * 5 = ?\n");
    printf("1. 20  2. 25  3. 30  4. 35\n");
    scanf("%d", &ans);
    if(ans == 2) score++;

    printf("\nFinal Score = %d/5\n", score);

    return 0;
}