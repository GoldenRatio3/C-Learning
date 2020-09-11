#include <stdio.h>

int main() {
  /* strings are terminated by a null character \0, these are automatically added by the C compiler */
  char greeting[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

  printf("Greeting message is %s\n", greeting);

  return 0;
}



