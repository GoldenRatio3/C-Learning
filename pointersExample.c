#include <stdio.h>

int main () {

  int var1 = 10;
  int *intPointer; /* pointer variable declartion */

  intPointer = &var1; /* store address of var1 in pointer variable */

  printf("Address of var1 is %x\n", &var1);

  printf("Address of intPointer is %x\n", intPointer);
 
  printf("Value of *intPointer variable is %d\n", *intPointer);

  return 0;
}


