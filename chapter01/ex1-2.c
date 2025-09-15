/* 1-2 int형 변수의 크기 출력 */
// int형의 크기는 4바이트이다.
#include <stdio.h>
void main() {
  int n = 100;

  printf("%d\n", sizeof(n));  // 4
  printf("%d\n", n);          // 100
}
