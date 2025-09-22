#include <stdio.h>
void main() {
  int arr[5] = {10, 20, 30, 40, 50};

  printf("%d %d %d \n", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0]));
  // 20 4 8

  // 20 = 4(int형 4바이트) * 5
  // 4 (int형 4바이트)
  // 8 (64비트 운영체제에서 포인터의 크기는 8바이트)
}