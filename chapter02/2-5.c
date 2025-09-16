/* 2-5 char형 2차원 포인터 cpp 선언 */
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp;
  char** cpp;
  cp = &c;
  cpp = &cp;

  printf("%c %c %c\n", c, *cp, **cpp);  // A A A
  printf("%x %x %x\n", &c, cp, *cpp);   // 17ffcd7 17ffcd7 17ffcd7
}