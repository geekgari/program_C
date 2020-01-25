#include <stdio.h>

int myisnegative(int n)
{
    if (n < 0) {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    int n = -2;
    printf("%d \n", myisnegative(n));
    return 0;
}
