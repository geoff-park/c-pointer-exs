// 3-17 int형 2차원 배열의 주소 출력
#include <stdio.h>
void main() {
  int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%p\n", iarr2);
  printf("%p %p %p\n", iarr2[0], iarr2[1], iarr2[2]);

  /*
  00000019D95FFCB0
  00000019D95FFCB0 00000019D95FFCBC 00000019D95FFCC8
  */
}