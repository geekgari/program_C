#include <stdio.h>

int main()
{
  int a, b, quotient, remainder;

  printf("enter a: ");
  scanf("%d", &a);

  printf("enter b: ");
  scanf("%d", &b);

  quotient = a / b;

  remainder = a % b;

  printf("Quotient = %d\n", quotient);
  printf("Remainder = %d\n", remainder);

  return 0;
}
