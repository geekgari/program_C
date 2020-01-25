#include <stdio.h>

int main() {
  double n1, n2, n3;

  printf("enter three numbers: ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);

  if(n1 >= n2 && n1 >= n3) {
    printf("%.2f is the largest number \n", n1);
  }
  else if(n2 >= n1 && n2 >= n3) {
    printf("%.2f is the largest number \n", n2);
  }
  else if(n3 >= n1 && n3 >= n2) {
    printf("%.2f is the largest number \n", n3);
  }

  return 0;
}