#include <stdio.h>

int main() {
    int n = 0;
    int current = 0, next = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1 || n > 45) {
        printf("Invalid input! Please enter a number between 1 and 45. \n");
        return 1;
    }

    for (int i = 1; i <= n; i += 1) {
        printf("%d", current);
        next = current + next;
        current = next - current;
    }

    // 01123

    // 2 + 3 = 5
    // 5 - 2 = 3


    // next = 5
    // current = 3

    printf("\n");

    return 0;
}