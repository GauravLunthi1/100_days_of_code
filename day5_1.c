//Write a program to calculate simple and compound interest for given principal, rate, and time

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest, amount;
    int i;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    
    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100);
    }
    compound_interest = amount - principal;

    printf("Simple Interest: %f\n", simple_interest);
    printf("Compound Interest: %f\n", compound_interest);

    return 0;
}

