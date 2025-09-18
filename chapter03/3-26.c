// 3-26 int형 3차원 배열의 주소 출력
#include <stdio.h>
void main() {
  int iarr3[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  printf("%x \n", iarr3);                  // ee3ffbd0
  printf("%x %x \n", iarr3[0], iarr3[1]);  // ee3ffbd0 ee3ffbe8 (ee3ffbe8 = ee3ffbd0 + 0x18)

  printf("%x %x %x %x \n",
         iarr3[0][0], iarr3[0][1], iarr3[1][0], iarr3[1][1]);  // ee3ffbd0 ee3ffbd8 ee3ffbe8 ee3ffbf0
  printf("%x %x %x %x \n",
         &iarr3[0][0][0], &iarr3[0][1][0], &iarr3[1][0][0], &iarr3[1][1][0]);  // ee3ffbd0 ee3ffbd8 ee3ffbe8 ee3ffbf0 (same with line 10)
  printf("%x %x %x %x \n",
         iarr3[0][0][0], iarr3[0][1][0], iarr3[1][0][0], iarr3[1][1][0]);  // arr value

  // iarr3, iaar3[0], iarr3[0][0], &iaar3[0][0][0] 의 주소는 모두 같다.
  // iarr3: 배열의 3차원 주소의 의미
  // iarr3[0]: 배열의 2차원 주소의 의미
  // iarr3[0][0]: 배열의 1차원 주소의 의미
  // &iaar3[0][0][0]: char형 변수 1차원 주소의 의미
}