#include <stdio.h>
#include <math.h>

// Function to evaluate an expression step by step
double evaluate_expression() {
    double result;
    
    // Demonstrating PEMDAS
    printf("Operator Precedence Demonstration (PEMDAS)\n\n");
    
    // Parentheses
    printf("1. Parentheses: (3 + 2) * 4 = %d\n", (3 + 2) * 4);
    
    // Exponentiation (Using pow function)
    printf("2. Exponentiation: 2^3 = %.2f\n", pow(2, 3));
    
    // Multiplication and Division (Left to Right)
    printf("3. Multiplication & Division: 10 / 2 * 5 = %.2f\n", 10.0 / 2 * 5);
    
    // Addition and Subtraction (Left to Right)
    printf("4. Addition & Subtraction: 10 + 5 - 3 = %d\n", 10 + 5 - 3);
    
    return result;
}

int main() {
    evaluate_expression();
    return 0;
}
