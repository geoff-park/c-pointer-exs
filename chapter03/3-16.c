// 3-16 char형 2차원 배열의 주소 출력
#include <stdio.h>
void main() {
  char carr2[2][3] = {'A', 'B', 'C', 'D', 'E', 'F'};

  printf("%p \n", carr2);

  printf("%p %p %p %p \n", carr2[0], carr2[1], &carr2[0][0], &carr2[1][0]);

  /*
  0000007D529FFD2A
  0000007D529FFD2A 0000007D529FFD2D 0000007D529FFD2A 0000007D529FFD2D

  caar2: 2차원 char형 배열의 시작 주소 (0000007D529FFD2A)
  caar2[0]: 0행의 시작 주소 (0000007D529FFD2A)
  caar2[1]: 1행의 시작 주소 (0000007D529FFD2D)
  &caar2[0][0]: char형 메모리의 1차원 시작 주소 (0000007D529FFD2A)
  &caar2[1][0]: char형 메모리의 1차원 시작 주소 (0000007D529FFD2D)
  */
}