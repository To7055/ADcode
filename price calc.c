/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int add_to_price(int fuelchange, int price) {
    int new_fuelchange = fuelchange + 10;
    return new_fuelchange;
}

int add_to_tons(int price, int overcharge) {
    int new_price = price + (70 * overcharge);
    return new_price;
}

int main() {
    int yarder, price = 0, tons, fuelchange = 0, overcharge = 0;
    int Total_fuelchange, Total_price;

    // Get user input
    printf("What is the container size? ");
    scanf("%d", &yarder);

    printf("How many tons? ");
    scanf("%d", &tons);

    // Determine base price based on yarder size
    if (yarder == 20) {
        printf("Original price is 600\n");
        price = 600;
    } else if (yarder == 30) {
        printf("Original price is 700\n");
        price = 700;
    }

    // Calculate total fuel change
    Total_fuelchange = add_to_price(fuelchange, price);

    // Check for overcharge
    if (tons > 6) {
        overcharge = tons - 6;
    }

    // Calculate total price including overcharge
    Total_price = add_to_tons(price, overcharge);

    // Output results
    printf("Plus %d percent fuel change\n", Total_fuelchange);
    printf("Tons: %d\n", tons);
    printf("Excess tons: %d\n", overcharge);
    printf("Total price: $%d\n", Total_price);

    // Save Total_price to a file
    FILE *file = fopen("total_cost.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%d\n", Total_price);
    fclose(file);

    return 0;
}


