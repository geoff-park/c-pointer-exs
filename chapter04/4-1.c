// 4-1 char형 변수의 주소를 char형 1차원 포인터 변수에 저장
#include <stdio.h>
void main() {
  char c = 'A';
  char* cp = &c;

  printf("%c %c %c \n", c, *cp, cp[0]);
}
