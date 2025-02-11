#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to generate three-address code
void generateThreeAddressCode(char *expression) {
    char tempVar = 'T';  // Temporary variable prefix
    int tempCount = 1;   // Temporary variable counter

    char stack[100];     // Stack to hold operators and operands
    int top = -1;        // Stack top pointer

    printf("Three Address Code:\n");

    for (int i = 0; i < strlen(expression); i++) {
        if (isalnum(expression[i])) {
            // If the character is an operand, push it to the stack
            stack[++top] = expression[i];
        } else if (isOperator(expression[i])) {
            // If the character is an operator, generate three-address code
            char op1 = stack[top--];
            char op2 = stack[top--];

            char resultVar = tempVar + tempCount++;
            printf("%c = %c %c %c\n", resultVar, op2, expression[i], op1);

            // Push the result back to the stack
            stack[++top] = resultVar;
        }
    }

    // Final result
    printf("Result = %c\n", stack[top]);
}

int main() {
    char expression[100];

    // Input the expression
    printf("Enter an arithmetic expression (e.g., a+b*c): ");
    scanf("%s", expression);

    // Generate three-address code
    generateThreeAddressCode(expression);

    return 0;
}
