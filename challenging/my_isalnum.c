#include <stdio.h>

int my_isalnum(char c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char c = '2';
    printf("%d \n", my_isalnum(c));
    return 0;
}
