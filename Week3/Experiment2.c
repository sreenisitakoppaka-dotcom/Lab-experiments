#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the Time Period (in years): ");
    scanf("%lf", &time);

  
    amount = principal * pow((1 + rate / 100), time);

    
    compound_interest = amount - principal;

  
    printf("\n--- Results ---\n");
    printf("Total Accumulated Amount: %.2lf\n", amount);
    printf("Compound Interest Earned: %.2lf\n", compound_interest);

    return 0;
}
