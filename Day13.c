q1:Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
code:
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space added to avoid input issues

    switch(op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero not allowed\n");
            break;

        case '%':
            if(b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Modulo by zero not allowed\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}

q2: Write a program to print numbers from 1 to n.
code:
#include <stdio.h>

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
