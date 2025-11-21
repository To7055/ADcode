/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Function to calculate percentage based on city value
float calc_percent(int price, int city) {
    float new_price = 0.0;
    if (city == 20) {
        new_price = price * (20.0 / 100.0);
    } else if (city == 22) {
        new_price = price * (22.0 / 100.0);
    } else if (city == 25) {
        new_price = price * (25.0 / 100.0);
    } else if (city == 10) {
        new_price = price * (10.0 / 100.0);
    } else if (city == 17) {
        new_price = price * (17.0 / 100.0);
    }
    return new_price;
}

int main() {
    char franchise[50];
    int city = 0;
    int price = 600;
    float total_franchisefee;

    // Input the franchise city
    printf("Which city is the order coming from? ");
    fgets(franchise, sizeof(franchise), stdin);
    franchise[strcspn(franchise, "\n")] = '\0'; // Remove trailing newline

    // Determine city value based on franchise
    if (strcmp(franchise, "Coral Gables") == 0) {
        city = 22;
    } else if (strcmp(franchise, "Fort Lauderdale") == 0) {
        city = 25;
    } else if (strcmp(franchise, "Doral") == 0) {
        city = 10;
    } else if (strcmp(franchise, "Miami Beach") == 0) {
        city = 17;
    } else if (strcmp(franchise, "Miami Gardens") == 0) {
        city = 20;
    } else if (strcmp(franchise, "North Miami") == 0) {
        city = 20;
    } else if (strcmp(franchise, "Sweetwater") == 0) {
        city = 20;
    }

    // Print the city value
    printf("City value: %d\n", city);

    // Calculate franchise fee
    total_franchisefee = calc_percent(price, city);

    // Print the total franchise fee
    printf("Total franchise fee: %.2f\n", total_franchisefee);

    // Save Total franchise fee to a file
    FILE *file = fopen("franchise_fee.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%.2f\n", total_franchisefee);
    fclose(file);

    return 0;
}



