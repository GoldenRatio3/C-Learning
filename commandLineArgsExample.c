#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("Program name %s\n", argv[0]);
  printf("# of args are %i\n", argc);

  for (int i=0; i<argc; i++) {
    printf("Current arg is %s\n", argv[i]);
  }

  return 0;
}


