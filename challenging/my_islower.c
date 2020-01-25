#include <stdio.h>

int my_islower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char c = 'e';
    printf("%d \n", my_islower(c));
    return 0;
}
