#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

  
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

  
    if (number < 0) {
        printf("Error: Square root of a negative number is an imaginary number.\n");
    } else {
      
        result = sqrt(number);
        
        
        printf("The square root of %.2lf is %.2lf\n", number, result);
    }

    return 0;
}
