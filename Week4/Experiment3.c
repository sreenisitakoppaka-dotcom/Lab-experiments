#include <stdio.h>

int main() {
    
    int sub1, sub2, sub3, sub4, sub5;
    
  
    float total, average;

    
    printf("Enter the marks of 5 subjects (as integers):\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    
    total = sub1 + sub2 + sub3 + sub4 + sub5;

  
    average = total / 5.0;

    
    printf("\n--- Results ---\n");
    printf("Total Marks   = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
