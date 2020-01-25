#include <stdio.h>

int my_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char c = 'a';
    printf("%d \n", my_isalpha(c));
    return 0;
}
