/* 2-2 int형 포인터 np */
#include <stdio.h>
void main() {
  int n = 20;
  int* np = &n;

  // *np는 n과 같은 메모리 이름이다.
  printf("%d %d\n", n, *np);                     // 20 20
  printf("%d %d\n", sizeof(int), sizeof(int*));  // 4 8
  printf("%d %d\n", sizeof(n), sizeof(np));      // 4 8
}