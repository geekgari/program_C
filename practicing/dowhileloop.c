#include <stdio.h>

int main()
{
    double number, sum = 0;

    do {
        printf("enter a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);
    printf("%.2lf \n", sum);

    return 0;
}
