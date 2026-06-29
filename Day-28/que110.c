#include <stdio.h>

struct BankAccount
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount acc;
    int choice;
    float amount;

    // Create Account
    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n===== BANK MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                acc.balance += amount;
                printf("Amount deposited successfully.\n");
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= acc.balance)
            {
                acc.balance -= amount;
                printf("Amount withdrawn successfully.\n");
            }
            else
            {
                printf("Insufficient balance.\n");
            }
            break;

        case 3:
            printf("Current Balance: %.2f\n", acc.balance);
            break;

        case 4:
            printf("\n----- Account Details -----\n");
            printf("Account Number : %d\n", acc.accountNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance        : %.2f\n", acc.balance);
            break;

        case 5:
            printf("Thank you for using the Bank Account System!\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}