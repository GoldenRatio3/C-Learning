#include <stdio.h>

#define message_for(a, b) \
  printf(#a " and " #b ": Happy B day!\n");

#define tokenpaster(n) printf("token" #n " = %d", token##n);

int main() {
  printf("File: %s\n", __FILE__);
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);
  printf("Line: %d\n", __LINE__);
  
  message_for(Brad, Aliza);

  int token34 = 40;
  tokenpaster(34);

  return 0;
}


