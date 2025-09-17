// 3-14 char형 1차원 배열과 2차원 배열의 크기 출력 (sizeof 연산자)
#include <stdio.h>
void main() {
  char carr1[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
  char carr2[2][3] = {'A', 'B', 'C', 'D', 'E', 'F'};

  printf("%d %d \n", sizeof(carr1), sizeof(carr2));        // 6 6
  printf("%d %d \n", sizeof(carr2[0]), sizeof(carr2[1]));  // 3 3

  // 두 배열 모두 각각 6바이트이다.
  // 일차원 배열의 이름 carr1은 1차원 배열의 시작 주소이며 다차원 배열의 이름 caar2는 2차원 배열의 시작 주소,
  // carr2[0]은 0행의 시작 주소,
  // carr2[1]은 1행의 시작 주소를 의미한다.
}