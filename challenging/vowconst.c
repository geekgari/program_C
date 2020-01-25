#include <stdio.h>

int main() {
  char c;
  int lowercase, uppercase;
  printf("enter a letter: ");
  scanf("%c", &c);

  lowercase = (c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u');
  uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if(lowercase || uppercase) {
    printf("%c is a vowel \n", c);
  }else{
    printf("%c is constant \n", c);
  }
  return 0;
}