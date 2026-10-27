#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    // 1. Input the three sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);

  
  
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
      
        s = (a + b + c) / 2.0;

      
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        
        printf("\nCalculation Successful!");
        printf("\nSemi-perimeter (s) = %.4lf", s);
        printf("\nArea of the triangle = %.2lf square units\n", area);
    } 
    else {
        
        printf("\nError: The entered sides do not form a valid triangle.\n");
        printf("Reason: The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
