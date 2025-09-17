/* 3-8 상수 주소를 사용하여 배열 요소에 접근 */
// ** 실행 시 올바른 출력을 보장하지 않습니다.
#include <stdio.h>
void main() {
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("%c %c %c %c %c \n",
         *(char*)0x12ff78, *(char*)0x12ff79, *(char*)0x12ff7a, *(char*)0x12ff7b, *(char*)0x12ff7c);
}