#include <stdio.h>

int main() {
    
    int A = 10, B = 5, C = 2, D = 4, E = 3, F = 6, G = 7;
    int i = 1;
    
    
    int res_a;
    float res_b;
    int res_c;
    int J;

    printf("Initial Values:\n");
    printf("A = %d, B = %d, C = %d, D = %d, E = %d, F = %d, G = %d, i = %d\n\n", A, B, C, D, E, F, G, i);

    
    res_a = A + B * C + (D * E) + F * G;
    printf("a. Value of A + B * C + (D * E) + F * G = %d\n", res_a);


    
    res_b = (float)A / B * C - B + (float)A * D / 3;
    printf("b. Value of A / B * C - B + A * D / 3 = %.2f\n", res_b);

    
    
    int tempA = A, tempB = B; 
    res_c = A+++B---A;
    printf("c. Value of A +++ B --- A = %d (Updated values: A = %d, B = %d)\n", res_c, A, B);

    
    i = 1; 
    

    
    J = (i++) + (++i);
    printf("d. Value of J = (i++) + (++i) = %d (Final i = %d)\n", J, i);

    return 0;
}
