// 3-32 상수를 사용하여 2차원 배열의 값 출력 (1)
// 올바른 결과를 보장하지 않습니다.
#include <stdio.h>
void main() {
  int iarr2[2][3] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", iarr2);
  printf("%d %d %d %d %d %d \n", iarr2[0][0], iarr2[0][1], iarr2[0][2], iarr2[1][0], iarr2[1][1], iarr2[1][2]);
  printf("%d %d %d %d %d %d \n",
         *((int*)0xb07ff780),
         *(((int*)0xb07ff780) + 1),
         *(((int*)0xb07ff780) + 2),
         *(((int*)0xb07ff780) + 3),
         *(((int*)0xb07ff780) + 4),
         *(((int*)0xb07ff780) + 5));
  printf("%d %d %d %d %d %d \n",
         ((int*)0xb07ff780)[0],
         ((int*)0xb07ff780)[1],
         ((int*)0xb07ff780)[2],
         ((int*)0xb07ff780)[3],
         ((int*)0xb07ff780)[4],
         ((int*)0xb07ff780)[5]);
}