#include <stdio.h>

int my_isdigit(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char c = 'A';
    printf("%d \n", my_isdigit(c));
    return 0;
}
