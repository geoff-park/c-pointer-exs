/* 2-11 int형 포인터에 정수를 덧셈 */
#include <stdio.h>
void main() {
  int n = 20;
  int* np;
  int** npp;
  np = &n;
  npp = &np;

  printf("%x %x %x\n", n, np, npp);
  printf("%x %x %x\n", n + 1, np + 1, npp + 1);  // 각각 1, 4바이트, 8바이트 증가
}