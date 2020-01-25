#include <stdio.h>

int main()
{
    int num;

    printf("enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even integer \n", num);
    } else {
        printf("%d is odd integer \n", num);
    }

    return 0;
}
