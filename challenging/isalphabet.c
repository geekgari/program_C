#include <stdio.h>

int main() {
  char c;

  printf("enter alphabet: ");
  scanf("%c", &c);

  if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    printf("%c it is alphabet \n", c);
  }else{
    printf("%c it is not alphabet \n", c);
  }
  return 0;
}