#include <stdio.h>
#include <string.h>

/* union data type can be one of the below */
union Data {
  int i;
  float f;
  char str[20];
};

int main() {
  union Data data;

  strcpy(data.str, "Hello, World!");

  /* below memory size of data will be the greatest of the variables inside, in this case char 20 bytes */
  printf("Memory size occupied by data : %lu\n", sizeof(data));
  
  printf("string set to %s in union\n", data.str);

  return 0;
}



