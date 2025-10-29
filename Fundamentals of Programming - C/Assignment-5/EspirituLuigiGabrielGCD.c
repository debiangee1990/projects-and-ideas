#include <stdio.h>

int main() {
    int num1, num2, gcd;

    // This is where the program will ask the user for the First and 2nd Number
    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    // This is where the program will check if the number provided are less than or equal zero
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    // This is where the GCD gets computed; based on my research the GCD
    // is the Greatest Commond Divisor of the first and second number
    // it means that if I chose 12 and 18, both can be divided by 1, 2, 3, 4 and 6.
    // so the greatest is 6.
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Result ito
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}