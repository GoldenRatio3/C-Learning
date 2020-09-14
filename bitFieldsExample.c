#include <stdio.h>
#include <string.h>

struct {
  unsigned int widthValidated; /* 4 bytes */
  unsigned int heightValidated; /* 4 bytes */
} status1; /* total of 8 bytes */

/* #pragma pack(1) - remove this line to remove struct padding */
struct {
  unsigned int widthValidated : 1; /* define a structure with bit fields - 1 bits */
  unsigned int heightValidated : 1; /* 1 bit */
} status2; /* 4 bytes */

int main() {
  printf("Memory size occupied by status1: %lu bytes\n", sizeof(status1));
  printf("Memory size occupied by status2: %lu bytes\n", sizeof(status2));
  return 0;
}


