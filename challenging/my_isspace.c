#include <stdio.h>

int my_isspace(char c)
{
    if (c == ' ') {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char c = ' ';
    printf("%d \n", my_isspace(c));
    return 0;
}
