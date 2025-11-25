#include <stdio.h>

void calc(void) {
    char op;
    float a, b, result;

    printf("Enter operation : ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': result = a + b; 
                    break;
        case '-': result = a - b; 
                    break;
        case '*': result = a * b; 
                    break;
        case '/':
            if (b != 0) result = a / b; 
            else { printf("Error: division by zero\n"); return; }
            break;
        default: 
            printf("Invalid operation\n"); 
            return;
    }

    printf("Result = %.2f\n", result);
}

int main() {
    calc();
    return 0;
}
