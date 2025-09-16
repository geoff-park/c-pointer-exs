/* 2-8 char형 주소에 정수를 덧셈 */
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp;
  char** cpp;
  cp = &c;
  cpp = &cp;

  printf("%x %x %x\n", &c, &cp, &cpp);
  printf("%x %x %x\n", &c + 1, &cp + 1, &cpp + 1);
  // 각각 1바이트 증가, 8바이트 증가, 8바이트 증가

  /*
  9b3ffcff 9b3ffcf0 9b3ffce8
  9b3ffd00 9b3ffcf8 9b3ffcf0
  */
}