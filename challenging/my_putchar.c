#include <stdio.h>

void my_putchar(char c)
{
    printf("%c \n", c);
}

int main()
{
    char arr[] = { 'a', 'b', 'c', 'd', 'e' };
    for (int x = 0; x < 5; x++) {
        my_putchar(arr[x]);
    }
    return 0;
}
