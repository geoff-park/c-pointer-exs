/* 1-14 char형 주소에 * 연산자를 사용하여 값에 접근 */
#include <stdio.h>
void main() {
  char c = 'A';

  printf("%x\n", &c);
  printf("%c %c\n", c, *&c);
}