/* 3-2 int형 배열의 선언 */
#include <stdio.h>
void main() {
  int iarr[5] = {1, 2, 3, 4, 5};
  printf("%x %x\n", iarr, &iarr[0]);  // 18dff690 18dff690
}