#include <stdio.h>
void main() {
  int n = 10;
  int* np = &n;
  int** npp = &np;

  printf("%d %d %d\n", n, *np, **npp);                          // 10 10 10 (모두 같은 메모리 공간)
  printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(**npp));  // 4 4 4 (모두 같은 메모리 공간 -> int형은 4바이트)
  printf("%d %d %d\n", sizeof(n), sizeof(np), sizeof(npp));     // 4 8 8 (int형은 4바이트, 포인터는 8바이트)
}