#include <stdio.h>

void my_print_alphabet(void);

int main()
{
    my_print_alphabet();
    return 0;
}

void my_print_alphabet()
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++) {
        putchar(ch);
    }
}
