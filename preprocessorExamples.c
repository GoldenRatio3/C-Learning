#include <stdio.h>

#define message_for(a, b) \
  printf(#a " and " #b ": Happy B day!\n");

int main() {
  printf("File: %s\n", __FILE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);
  printf("Line: %d\n", __LINE__);
  
  message_for(Brad, Aliza);

  return 0;
}


