// 3-18 char형 2차원 배열의 주소 출력
#include <stdio.h>
void main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%p %p %p %p\n",
         &carr2[0][0], carr2, carr2[0], carr2[1]);
  // 000000EA3B7FFE3C 000000EA3B7FFE3C 000000EA3B7FFE3C 000000EA3B7FFE3E
}