#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char name[100];
  char *description;

  strcpy(name, "Bradley Winter");

  /* allocate memory dynamically (only need if unknown size is required) */
  description = malloc(200 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to alocate required memory\n");
  } else {
    strcpy(description, "Testing the 200 character description I have dynamically allocated");
  }

  printf("Name: %s\n", name);
  printf("Description: %s\n", description);

  /* release memory using free() function, this is good practice. When your program completes, OS will automatically release all assoicated memory */
  free(description);

  return 0;
}


