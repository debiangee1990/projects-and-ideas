#include <stdio.h>

int main() {

    int num, palindrome = 0, original, remainder;

    // Program ask the user for the Palindrome number
    printf("What is the number you want to validate? ");
    scanf("%d", &num);

    // defining the variable original
    original = num;

    // loop until the number is 0 then yung modulo will get the remainder or last digit by diving by 10
    while (num != 0) {
        remainder = num % 10;
        palindrome = palindrome * 10 + remainder;
        num = num / 10;
    }

    if (original == palindrome) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}