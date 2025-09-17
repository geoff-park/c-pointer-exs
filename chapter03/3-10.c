/* 3-10 int형 배열 주소에 정수를 덧셈 */
#include <stdio.h>
void main() {
  int iarr[5] = {10, 20, 30, 40, 50};

  printf("%p %p %p %p %p \n", iarr, iarr + 1, iarr + 2, iarr + 3, iarr + 4);
  // 000000201A9FFBD0 000000201A9FFBD4 000000201A9FFBD8 000000201A9FFBDC 000000201A9FFBE0

  // iarr은 배열의 시작 주소, int형 1차원 주소: 4바이트씩 증가한 주소가 출력
}