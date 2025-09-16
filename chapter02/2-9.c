/* 2-9 char형 포인터에 정수를 덧셈 */
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp;
  char** cpp;
  cp = &c;
  cpp = &cp;

  printf("%x %x %x\n", c, cp, cpp);
  printf("%x %x %x\n", c + 1, cp + 1, cpp + 1);  // 각각 1, 1, 8 증가
}