#include <stdio.h>
void main() {
  char c = 'Z';
  char* cp = &c;
  int n = 100;
  int* np = &n;

  printf("%d %d %d\n", sizeof(c), sizeof(*cp), sizeof(cp));  // 1 1 8
  printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(np));  // 4 4 8
  // c, *cp 둘은 동일 (char: 1바이트)
  // n, *np 둘은 동일 (int: 1바이트)
  // 64비트 운영체제에서 포인터의 크기는 8바이트다.
}