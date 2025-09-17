// 3-12 char형 1차원 배열과 2차원 배열의 비교
#include <stdio.h>
void main() {
  char carr1[6] = {'A', 'B', 'C', 'D', 'E', 'F'};     // 1차원 배열
  char carr2[2][3] = {'A', 'B', 'C', 'D', 'E', 'F'};  // 2차원 배열

  printf("%c %c %c %c %c %c \n",
         carr1[0], carr1[1], carr1[2], carr1[3], carr1[4], carr1[5]);

  printf("%c %c %c %c %c %c \n",
         carr2[0][0], carr2[0][1], carr2[0][2],
         carr2[1][0], carr2[1][1], carr2[1][2]);
}