/* 1-7 int형 변수들의 주소 출력 */
#include <stdio.h>
void main() {
  int n1 = 100;
  int n2 = 200;

  printf("%x\n", &n1);  // 883ff80c
  printf("%x\n", &n2);  // 883ff808
}