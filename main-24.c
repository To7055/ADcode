#include <stdio.h>
#include <stdlib.h> // For atof
#include <string.h>

int main() {
    // Variables for input
    char Date[100], Time[100], Name[100], User[100], PhoneNumber[100], Address[100];
    char franchiseFeeStr[100], priceStr[100];
    float franchiseFee = 0.0, price = 0.0;

    // Get input from the user
    printf("Today's Date? ");
    fgets(Date, sizeof(Date), stdin);
    Date[strcspn(Date, "\n")] = 0; // Remove newline character

    printf("Time? ");
    fgets(Time, sizeof(Time), stdin);
    Time[strcspn(Time, "\n")] = 0;

    printf("What is the client's name? ");
    fgets(Name, sizeof(Name), stdin);
    Name[strcspn(Name, "\n")] = 0;

    printf("Who is making the order? ");
    fgets(User, sizeof(User), stdin);
    User[strcspn(User, "\n")] = 0;

    printf("Phone number? ");
    fgets(PhoneNumber, sizeof(PhoneNumber), stdin);
    PhoneNumber[strcspn(PhoneNumber, "\n")] = 0;

    printf("Address? ");
    fgets(Address, sizeof(Address), stdin);
    Address[strcspn(Address, "\n")] = 0;

    // Open the files to read the franchise fee and total price
    FILE *feeFile = fopen("franchise_fee.txt", "r");
    FILE *priceFile = fopen("total_cost.txt", "r");

    if (feeFile && priceFile) {
        // Read values from the files
        fgets(franchiseFeeStr, sizeof(franchiseFeeStr), feeFile);
        fgets(priceStr, sizeof(priceStr), priceFile);

        franchiseFee = atof(franchiseFeeStr); // Convert string to float
        price = atof(priceStr);              // Convert string to float

        fclose(feeFile);
        fclose(priceFile);
    } else {
        printf("Error: Could not open required files.\n");
        return 1; // Exit the program if files cannot be opened
    }

    // Prepare a 2D array to store all values
    char receipt[7][150]; // Increased size to avoid truncation
    snprintf(receipt[0], sizeof(receipt[0]), "Date: %s", Date);
    snprintf(receipt[1], sizeof(receipt[1]), "Time: %s", Time);
    snprintf(receipt[2], sizeof(receipt[2]), "Name: %s", Name);
    snprintf(receipt[3], sizeof(receipt[3]), "User: %s", User);
    snprintf(receipt[4], sizeof(receipt[4]), "Phone Number: %s", PhoneNumber);
    snprintf(receipt[5], sizeof(receipt[5]), "Address: %s", Address);
    snprintf(receipt[6], sizeof(receipt[6]), "Total Price: $%.2f | Franchise Fee: $%.2f", price, franchiseFee);

    // Write the receipt to a new file
    FILE *receiptFile = fopen("receipt.txt", "w");
    if (receiptFile) {
        for (int i = 0; i < 7; i++) {
            fprintf(receiptFile, "%s\n", receipt[i]);
        }
        fclose(receiptFile);
        printf("Receipt saved to 'receipt.txt'.\n");
    } else {
        printf("Error: Could not create 'receipt.txt'.\n");
    }

    return 0;
}