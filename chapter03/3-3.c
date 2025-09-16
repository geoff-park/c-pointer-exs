/* 3-3 char형과 int형 배열의 크기 출력 */
#include <stdio.h>
void main() {
  char carr[5] = {1, 2, 3, 4, 5};
  int iarr[5] = {1, 2, 3, 4, 5};

  printf("%d %d\n", sizeof(carr), sizeof(iarr));  // 5 20
}