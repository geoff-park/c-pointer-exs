/* 3-9 int형 배열 요소의 출력 */
#include <stdio.h>
void main() {
  int iarr[5] = {10, 20, 30, 40, 50};

  printf("%d %d %d %d %d \n",
         iarr[0], iarr[1], iarr[2], iarr[3], iarr[4]);

  printf("%d %d %d %d %d \n",
         *(iarr + 0), *(iarr + 1), *(iarr + 2), *(iarr + 3), *(iarr + 4));
  // iarr은 int형 1차원 주소: +1을 할 때마다 주소를 4개씩 건너뛴다.

  printf("%d %d %d %d %d \n",
         *&iarr[0], *&iarr[1], *&iarr[2], *&iarr[3], *&iarr[4]);
}