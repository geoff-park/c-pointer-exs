/* 1-15 int형 주소에 * 연산자를 사용하여 값에 접근 */
#include <stdio.h>
void main() {
  int n = 100;

  printf("%x\n", &n);
  printf("%d %d\n", n, *&n);
}