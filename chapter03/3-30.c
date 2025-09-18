// 3-30 int형 2차원 배열의 주소 출력 (1)
#include <stdio.h>
void main() {
  int iarr2[2][3] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", iarr2);
  printf("%x %x %x %x %x %x \n",
         &iarr2[0][0], &iarr2[0][1], &iarr2[0][2], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);
  printf("%x %x %x %x %x %x \n",
         &iarr2[0][0], &iarr2[0][1], &iarr2[0][2], &iarr2[0][3], &iarr2[0][4], &iarr2[0][5]);
  printf("%x %x %x %x %x %x \n",
         &iarr2[1][-3], &iarr2[1][-2], &iarr2[1][-1], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);

  puts("=====================================================");

  printf("%x %x %x %x %x %x \n",
         iarr2[0], iarr2[0] + 1, iarr2[0] + 2, iarr2[1], iarr2[1] + 1, iarr2[1] + 2);
  printf("%x %x %x %x %x %x \n",
         iarr2[0], iarr2[0] + 1, iarr2[0] + 2, iarr2[0] + 3, iarr2[0] + 4, iarr2[0] + 5);
  printf("%x %x %x %x %x %x \n",
         iarr2[1] - 3, iarr2[1] - 2, iarr2[1] - 1, iarr2[1], iarr2[1] + 1, iarr2[1] + 2);

  // iarr2는 2차원 배열에 시작 주소로 2차원의 의미이며,
  // 아머지 출력되는 모든 주소의 의미는 1차원 주소이다.
}