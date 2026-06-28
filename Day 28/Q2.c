#include <stdio.h>

int main() {
    float balance, deposit, withdraw;

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance) {
        balance -= withdraw;
        printf("Withdrawal Successful\n");
    } else {
        printf("Insufficient Balance\n");
    }

    printf("Current Balance = %.2f\n", balance);

    return 0;
}