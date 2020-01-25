#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    printf("enter an operator: ");
    scanf("%c", &operator);

    printf("enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.lf \n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.lf \n", num1, num2, num1 + num2);
        break;

    default:
        printf("error operator is not correct");
    }
    return 0;
}
