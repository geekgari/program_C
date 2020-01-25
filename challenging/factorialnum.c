#include <stdio.h>

int main()
{
    int num;
    unsigned long fact = 1;

    printf("enter a integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("error.");
    } else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %lu \n", num, fact);
    }
    return 0;
}
