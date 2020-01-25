#include <stdio.h>

int main() {
  double number;

  printf("enter a number: ");
  scanf("%lf", &number);

  if(number > 0) {
    printf("%lf is postive \n", number);
  } else if (number < 0) {
    printf("%lf is negative \n", number);
  } else if (number == 0){
    printf("%lf is zero \n", number);
  }

  return 0;
}

