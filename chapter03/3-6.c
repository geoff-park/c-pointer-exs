/* 3-6 *과 & 연산자를 사용하여 char형 배열 요소에 접근 */
#include <stdio.h>
void main() {
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("%c %c %c %c %c\n",
         *&carr[0], *&carr[1], *&carr[2], *&carr[3], *&carr[4]);
}