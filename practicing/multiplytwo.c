#include <stdio.h>

int main()
{
  double num1, num2, multiply;

  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);

  multiply = num1 * num2;
  printf("%.2lf", multiply);

  return 0;
}
