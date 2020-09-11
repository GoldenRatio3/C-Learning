#include <stdio.h>

int main () {

  int var1 = 10;
  int *intPointer; /* pointer variable declartion */
  int *ptr = NULL; /* example null pointer */

  intPointer = &var1; /* store address of var1 in pointer variable */

  printf("Address of var1 is %x\n", &var1);

  printf("Address of intPointer is %x\n", intPointer);
 
  printf("Value of *intPointer variable is %d\n", *intPointer);

  /* to check if a pointer is null or not */
  if (ptr) {
    printf("The value of ptr is not null %x\n", ptr);
  } 

  if (!ptr) {
    printf("the value of ptr is null %x\n", ptr);
  }
  return 0;
}


