#include <stdio.h>

int main() {
  int arr[10];

  /* init array */
  for (int i = 0; i < 10; i++) {
    arr[i] = i + 2147483640;
  }

  /* print arr eles */
  for (int j = 0; j < 10; j++) {
    printf("Arr element %d has value %d\n", j, arr[j]);
  }

  printf("size of array is %lu\n", sizeof arr);
  printf("size of one element in the arr is %lu\n", sizeof arr[0]);
  printf("real size of arr is %lu\n", sizeof arr / sizeof arr[0]);

  return 0;
}


