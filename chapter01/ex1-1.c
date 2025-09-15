/* 1-1 char형 변수의 크기 출력 */
#include <stdio.h>
void main() {
  char c = 'A';  // 1바이트의 크기를 사용한다.
  printf("%d\n", sizeof(c));
  printf("%c\n", c);
}
