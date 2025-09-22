#include <stdio.h>
void main() {
  int arr[5] = {10, 20, 30, 40, 50};

  printf("%x \n", arr);
  puts("================");
  printf("%x %x \n", arr, &arr[0]);
  printf("%x %x \n", arr + 1, &arr[1]);
  printf("%x %x \n", arr + 2, &arr[2]);
  printf("%x %x \n", arr + 3, &arr[3]);
  printf("%x %x \n", arr + 4, &arr[4]);

  /*
  1a9ff9e0
  ================
  1a9ff9e0 1a9ff9e0
  1a9ff9e4 1a9ff9e4
  1a9ff9e8 1a9ff9e8
  1a9ff9ec 1a9ff9ec
  1a9ff9f0 1a9ff9f0

  sizeof(int) = 4 이므로 +1 연산은 0x4 씩 증가
  */
}