/* 1-9 char형 주소에 정수들을 덧셈 */
#include <stdio.h>
void main() {
  char c = 'A';

  printf("%x\n", &c);      // 1d7ff6ff
  printf("%x\n", &c + 1);  // 1d7ff700
  printf("%x\n", &c + 2);  // 1d7ff701
  printf("%x\n", &c + 3);  // 1d7ff702
}