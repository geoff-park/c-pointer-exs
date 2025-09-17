/* 3-7 char형 배열 주소에 정수를 덧셈 */
#include <stdio.h>
void main() {
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("%x %x %x %x %x \n",
         carr, carr + 1, carr + 2, carr + 3, carr + 4);
  // e21ff6fb e21ff6fc e21ff6fd e21ff6fe e21ff6ff
  // carr은 char형 1차원 주소이므로 +1을 한 것은 주소 1개를 증가시킨다.
}