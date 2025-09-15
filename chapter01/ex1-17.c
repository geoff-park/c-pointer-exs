/* 1-17 char형 주소를 int형 주소로 변환하여 값에 접근 */
#include <stdio.h>
void main() {
  char c = 10;

  printf("%d\n", c);
  printf("%d\n", *&c);
  printf("%d\n", *(int*)&c);  // 쓰레기 값
}