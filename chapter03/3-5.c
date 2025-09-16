/* 3-5 * 연산자를 사용하여 char형 배열 요소에 접근 */
#include <stdio.h>
void main() {
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("%c %c %c %c %c\n",
         *carr, *(carr + 1), *(carr + 2), *(carr + 3), *(carr + 4));
}

// 1. *carr에서 -> 메모리에서 1바이트 읽음
// 2. printf에 넘길 때 -> int로 자동 promotion
// 3. %c -> 받은 int의 하위 1바이트만 문자로 출력