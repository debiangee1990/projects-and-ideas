#include <stdio.h>

int main(){

    float hours;
    float rate;
    float gross;
    float tax;
    float sss;
    float philhealth;
    float pagibig;
    float netsal;

    // this is where the program will ask the user for the hours worked and hourly rate
    printf("Enter total hours worked in a month: ");
    scanf("%f", &hours);

    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    // first is to get the gross salary of the employee so calculate dito
    gross = hours * rate;

    // calculating the tax
    tax = (gross <= 10000) ? 0 :
          (gross <= 30000) ? (gross - 10000) * 0.10 :
          (gross <= 50000) ? ((gross - 30000) * 0.20) + 2000 :
          ((gross - 50000) * 0.30) + 6000;
    
    
    // here is the government deductions
    sss = gross * 0.05;
    philhealth = gross * 0.03;
    pagibig = 100;

    // get the net salary
    netsal = gross - (tax + sss + philhealth + pagibig);

    // this will be printed to get the view of breakdown
    printf("\n--- Salary Breakdown ---\n");
    printf("Gross Salary: %.2f\n", gross);
    printf("Tax Deduction: %.2f\n", tax);
    printf("SSS Contribution: %.2f\n", sss);
    printf("PhilHealth: %.2f\n", philhealth);
    printf("Pag-IBIG: %.2f\n", pagibig);
    printf("\n-----------------------------\n");
    printf("Net Salary: %.2f\n", netsal);

    return 0;
}