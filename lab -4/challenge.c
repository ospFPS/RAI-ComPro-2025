#include <stdio.h>

 int Num,amount;
float balance = 0;

int main() {

    while (1) {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &Num);

        if (Num == 1) 
        {
            printf("Current Balance: %.2f\n", balance);
        } 
        else if (Num == 2) 
        {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            if (amount > 0) 
            {
                balance += amount;
            } 
            else 
            {
                printf("Error deposit amount.\n");
            }
        } 
        else if (Num == 3) 
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount > 0 && amount <= balance) 
            {
                balance -= amount;
                printf("Withdrawal successful.\n");
            } else if (amount > balance) 
            {
                printf("Error balance.\n");
            } 
            else 
            {
                printf("Error withdrawal amount.\n");
            }
        } 
        else if (Num == 4) 
        {
            printf("Thank you for using the ATM.\n");
            break;
        } 
        else 
        {
            printf("Error.\n");
        }
    }

    return 0;
}
