/* 1-6 char형 주소의 덧셈 */
#include <stdio.h>
void main() {
  char c1 = 'A';
  char c2 = 'B';
  printf("%x\n", &c1);      // c9dff72f
  printf("%x\n", &c1 + 1);  // c9dff730 = c9dff72f + 1
  printf("%x\n", &c2);      // c9dff72e
  printf("%x\n", &c2 + 1);  // c9dff72f = c9dff72e + 1
}

// char형 주소에 정수를 덧셈하라는 명령은 char형 메모리 공간을 건너뛴 다음 메모리의 주소를 구하라는 명령이다.