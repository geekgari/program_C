#include <stdio.h>

int main()
{
    int num, count, sum = 0;

    printf("enter a postive number ");
    scanf("%d", &num);

    for (count = 1; count <= num; ++count) {
        sum += count;
    }
    printf("%d \n", sum);
    return 0;
}
