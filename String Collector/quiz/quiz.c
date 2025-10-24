#include <stdio.h>

int main(){

    int n = 0;
    int current = 0, next = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1 && n > 100) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 1; i <=n; i += 1) {
        printf("%d, ", current);
        next = current + next;
        current = next - current;

    }

    printf("\n");
    return 0;
}