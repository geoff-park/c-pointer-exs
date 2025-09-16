/* 2-4 int형 포인터 np를 사용하여 값에 접근 */
#include <stdio.h>
void main() {
  int n = 20;
  int* np = &n;
  *np = 30;
  printf("%d %d\n", n, *np);  // 30 30
}