#include <stdio.h>

int main()
{
    int pin = 1234;
    int Pin;
    int choice;
    int attempts = 3;
    float balance = 10000;
    float amount;

    printf("=== ATM SIMULATION ===\n");

    while (attempts > 0)
    {
        printf("Enter your PIN: ");
        scanf("%d", &Pin);

        if (Pin == pin)
        {
            printf("\nLogin Successful!\n");
            break;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN! Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0)
    {
        printf("\nCard blocked due to too many incorrect attempts.\n");
        return 0;
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposited successfully!\n");
            printf("New balance: %.2f\n", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance -= amount;
                printf("Please collect your cash.\n");
                printf("Remaining balance: %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using ATM. Have a good day!\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}