#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {

  while (1) {
    char *pStr = (char*) malloc(25);
    free(pStr); /* Remove this line to demostrate memory leak */
  }
  return 0;
}
