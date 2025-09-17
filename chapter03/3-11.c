// 3-11 상수 주소를 사용하여 배열 요소에 접근
// 형변환 연산자를 사용하여 상수를 int형 주소로 변환, * 연산자를 사용하여 int형 4바이트에 접근한다.
// 주의: 올바른 실행 결과를 보장하지 않습니다.

#include <stdio.h>
void main() {
  int iarr[5] = {10, 20, 30, 40, 50};

  printf("%d %d %d %d %d \n",
         *(int*)0x12ff6c, *(int*)0x12ff70, *(int*)0x12ff74, *(int*)0x12ff78, *(int*)0x12ff7c);
}