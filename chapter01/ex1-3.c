/* 1-3 double형 변수의 크기 출력 (8바이트) */
#include <stdio.h>
void main() {
  double d = 100;
  printf("%d\n", sizeof(d));  // 8
  printf("%g\n", d);          // 100
}
