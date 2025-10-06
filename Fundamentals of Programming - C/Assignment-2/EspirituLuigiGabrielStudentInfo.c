#include <stdio.h>

int main(){

    char name[30];
    int age;
    float grade;
    char subjectInitial;

    // TODO: Ask user for input using scanf()

    // ask the user for name
    printf("Enter your name: ");
    scanf("%s", &name);

    // ask the user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // ask the user for grade
    printf("Enter your grade: ");
    scanf("%f", &grade);
    
    // ask the user for favorite subject (first letter only)
    printf("Enter the first letter of your favorite subject: ");
    scanf(" %c", &subjectInitial);

    // TODO: Display the collected information using printf()

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %.2f\n", grade);
    printf("Favorite Subject Initial: %c\n", subjectInitial);

    return 0;
}