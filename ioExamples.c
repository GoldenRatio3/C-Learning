#include <stdio.h>

#define MAX 100

int main() {
  char str[MAX];
  int i;

  printf("Enter a value: ");
  scanf("%s %d", str, &i);

  printf("\nYou entered: %s %d ", str, i);
  /*puts(str);*/

  return 0;
}


