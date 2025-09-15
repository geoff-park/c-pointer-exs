/* 1-21 [] 연산자를 사용하여 int형 메모리를 1바이트씩 접근하여 정수 대입 */
#include <stdio.h>
void main() {
  int n = 0x44434241;

  printf("%d %c\n", ((char*)&n)[0], ((char*)&n)[0]);  // 65 A
  printf("%d %c\n", ((char*)&n)[1], ((char*)&n)[1]);  // 66 B
  printf("%d %c\n", ((char*)&n)[2], ((char*)&n)[2]);  // 67 C
  printf("%d %c\n", ((char*)&n)[3], ((char*)&n)[3]);  // 68 D

  /* ((char*)&n)[0]은 *(char*)&n과 같다! */
}