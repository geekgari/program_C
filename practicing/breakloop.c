#include <stdio.h>

int main()
{
    int i;
    double number, sum = 0.0;

    for (i = 1; i <= 3; ++i) {
        printf("enter %d: ", i);
        scanf("%lf", &number);

        sum += number;
    }
    printf("%.2lf \n", sum);
    return 0;
}
