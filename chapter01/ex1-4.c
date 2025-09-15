/* 1-4 char형 변수의 주소 출력 */
#include <stdio.h>
void main() {
  char c = 'A';

  printf("%c\n", c);          // A
  printf("%d %x\n", &c, &c);  // 379583391 169ffb9f
}