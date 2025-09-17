// 3-23 char형 2차원 배열 이름을 사용하여 값에 접근 (3)
#include <stdio.h>
void main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%c %c %c %c \n",
         carr2[0][0], carr2[0][1], carr2[1][0], carr2[1][1]);

  printf("%c %c %c %c \n",
         **carr2, *(*carr2 + 1), **(carr2 + 1), *(*(carr2 + 1) + 1));
}