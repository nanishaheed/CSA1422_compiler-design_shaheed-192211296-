#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void eliminateCommonSubexpression(char expr[]) {
    char subexpr[100] = "";
    int tempVar = 1;
    
    printf("Optimized Code:\n");
    
    // Example of eliminating a common subexpression (simplified case)
    if (strstr(expr, "a * b") && strstr(expr, "a * b + c")) {
        sprintf(subexpr, "t%d", tempVar++);
        printf("%s = a * b\n", subexpr);
        printf("result = %s + c\n", subexpr);
    } else {
        printf("No common subexpression found.\n");
    }
}

int main() {
    char expression[100];
    
    printf("Enter an expression: ");
    scanf(" %[^]s", expression);
    
    eliminateCommonSubexpression(expression);
    
    return 0;
}
