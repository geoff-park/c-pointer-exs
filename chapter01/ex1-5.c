/* 1-5 char형 변수들의 주소 출력 */
#include <stdio.h>
void main() {
  char c1 = 'A';
  char c2 = 'B';

  printf("%x\n", &c1);  // 609ffc3f
  printf("%x\n", &c2);  // 609ffc3e
}