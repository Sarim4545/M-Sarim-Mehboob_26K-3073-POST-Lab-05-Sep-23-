#include <stdio.h>

int main() {
    int primaryChoice, secondaryChoice;

    printf("--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &primaryChoice);


    switch (primaryChoice) {
        case 1: 
            printf("\n--- Balance Inquiry ---\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &secondaryChoice);

            switch (secondaryChoice) {
            case 1:
            printf("\nSelected: Balance Inquiry -> Savings Account\n");
            break;
            case 2:
            printf("\nSelected: Balance Inquiry -> Current Account\n");
            break;
            default:
            printf("\nError: Invalid account type selected.\n");
            break;
            }
            break;

        case 2: 
            printf("\n--- Cash Withdrawal ---\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &secondaryChoice);


            switch (secondaryChoice) {
                case 1:
                    printf("\nSelected: Cash Withdrawal -> Savings Account\n");
                    break;
                case 2:
                    printf("\nSelected: Cash Withdrawal -> Current Account\n");
                    break;
                default:
                    printf("\nError: Invalid account type selected.\n");
                    break;
            }
            break;

        case 3: 
            printf("\n--- Cash Deposit ---\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &secondaryChoice);

            switch (secondaryChoice) {
                case 1:
                    printf("\nSelected: Cash Deposit -> Savings Account\n");
                    break;
                case 2:
                    printf("\nSelected: Cash Deposit -> Current Account\n");
                    break;
                default:
                    printf("\nError: Invalid account type selected.\n");
                    break;
            }
            break;

        case 4:
            printf("\n--- PIN Change ---\n");
            printf("1. Confirm PIN Change\n");
            printf("2. Cancel\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &secondaryChoice);

        
            switch (secondaryChoice) {
                case 1:
                    printf("\nSelected: PIN Change -> Confirmed\n");
                    break;
                case 2:
                    printf("\nSelected: PIN Change -> Cancelled\n");
                    break;
                default:
                    printf("\nError: Invalid choice selected.\n");
                    break;
            }
            break;

        default:
            printf("\nError: Invalid ATM operation selected.\n");
            break;
    }

    return 0;
}

