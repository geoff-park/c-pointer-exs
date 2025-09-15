/* 1-20 int형 메모리를 1바이트씩 접근하여 정수 대입 */
#include <stdio.h>
void main() {
  int n;

  *((char*)&n) = 4;
  *((char*)&n + 1) = 3;
  *((char*)&n + 2) = 2;
  *((char*)&n + 3) = 1;

  printf("%08x %d\n", n, n);  // 01020304 16909060
}