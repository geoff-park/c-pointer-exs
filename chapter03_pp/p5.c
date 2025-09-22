#include <stdio.h>
void main() {
  int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};

  printf("%x \n", arr);
  puts("===================");
  printf("%x %x %x \n", arr + 1, arr[0] + 1, arr[1] + 1);
  printf("%x %x %x \n", arr + 2, arr[0] + 2, arr[1] + 2);
  printf("%x %x %x \n", arr + 3, arr[0] + 3, arr[1] + 3);

  /*
  c3dffab0
  ===================
  c3dffabc c3dffab4 c3dffac0
  c3dffac8 c3dffab8 c3dffac4
  c3dffad4 c3dffabc c3dffac8

  1열: arr의 타입은 int (*)[3]  -> +1 연산은 0xC 만큼 증가
  2열: arr[0]의 타입은 int*     -> +1 연산은 0x4 만큼 증가
  3열: arr[1]의 타입은 int*     -> +1 연산은 0x4 만큼 증가
  */
}