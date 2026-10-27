#include <stdio.h>

int main() {
    
    double principal, rate, time, simple_interest, total_amount;

    
    printf("--- Experiment 3: Simple Interest Calculator ---\n");
    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

  
    simple_interest = (principal * rate * time) / 100.0;

    
    total_amount = principal + simple_interest;

    
    printf("\n--- Calculation Results ---\n");
    printf("Principal Amount : $%.2f\n", principal);
    printf("Interest Rate    : %.2f%%\n", rate);
    printf("Time Period      : %.2f years\n", time);
    printf("---------------------------\n");
    printf("Simple Interest  : $%.2f\n", simple_interest);
    printf("Total Amount     : $%.2f\n", total_amount);

    return 0;
}
