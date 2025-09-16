/* 2-6 int형 2차원 포인터 npp 선언 */
#include <stdio.h>
void main() {
  int n = 20;
  int* np;
  int** npp;
  np = &n;
  npp = &np;

  printf("%d %d %d\n", n, *np, **npp);  // 20 20 20
  printf("%x %x %x\n", &n, np, *npp);   // 8e5ffb94 8e5ffb94 8e5ffb94
}