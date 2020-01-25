#include <stdio.h>

int my_abs(int nbr)
{
    if (nbr < 0) {
        return -nbr;
    } else {
        return nbr;
    }
}

int main()
{
    int nbr = 1;
    printf("%d \n", nbr);
    return 0;
}
