#include <stdio.h>

int main() {
    // Expression: 10 + 5 * 2 - 8 / 4 % 3
    /* 
       Prediction breakdown based on operator precedence:
       1. Multiplication & Division/Modulo have higher precedence:
          - 5 * 2 = 10
          - 8 / 4 = 2
          - 2 % 3 = 2
       2. Expression becomes: 10 + 10 - 2
       3. Addition & Subtraction evaluate left-to-right:
          - 10 + 10 = 20
          - 20 - 2 = 18
    */

    int result = 10 + 5 * 2 - 8 / 4 % 3;

    printf("Expression: 10 + 5 * 2 - 8 / 4 %% 3\n");
    printf("Predicted Output: 18\n");
    printf("Actual Output: %d\n", result);

    return 0;
}
