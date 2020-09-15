#include <stdio.h>

#define MAX 100

int main() {
  char str[MAX];

  printf("Enter a value: ");
  fgets(str, MAX, stdin);

  printf("\nYou entered: ");
  puts(str);

  return 0;
}


