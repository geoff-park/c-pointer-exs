/* 2-1 char형 포인터 cp */
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp = &c;

  // *cp는 c와 같은 메모리 이름이다.
  printf("%c %c\n", c, *cp);                       // A A
  printf("%d %d\n", sizeof(char), sizeof(char*));  // 1 8
  printf("%d %d\n", sizeof(c), sizeof(cp));        // 1 8
}
