#include <stdio.h>
void main() {
  int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};

  printf("%d %d %d \n", sizeof(arr), sizeof(arr[0]), sizeof(arr[1]));               // 24 12 12
  printf("%d %d %d \n", sizeof(arr[0][0]), sizeof(arr[1][0]), sizeof(&arr[0][0]));  // 4 4 8

  // 24 = 4 (size of int) * 6
  // 12 = 4 (size of int) * 3
  // 12 = 4 (size of int) * 3

  // 4 (size of int)
  // 4 (size of int)
  // 8 (size of int* in 64-bit os)
}