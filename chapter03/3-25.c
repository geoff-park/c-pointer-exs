// 3-25 int형 2차원 배열의 주소 출력
#include <stdio.h>
void main() {
  int iarr2[2][2] = {1, 2, 3, 4};

  printf("%x \n", iarr2);

  printf("%x %x %x %x \n", iarr2[0], iarr2[1], &iarr2[0][0]);
}