/* 2-3 char형 포인터 cp를 사용하여 값에 접근 */
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp = &c;
  *cp = 'B';
  printf("%c %c\n", c, *cp);  // B B
}