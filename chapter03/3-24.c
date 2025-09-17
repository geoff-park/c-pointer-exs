// 3-24 int형 3차원 배열 이름을 사용하여 값에 접근
#include <stdio.h>
void main() {
  char carr3[2][2][3] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};

  printf("%x %x %x %x\n", carr3, carr3[0], carr3[0][0], carr3[0][0][0]);

  printf("%x %x %x %x\n", carr3 + 1, carr3[0] + 1, carr3[0][0] + 1, carr3[0][0][0] + 1);
  // carr3는 3차원 char형 배열의 시작 주소
  // +1은 6바이트(2*3)를 증가시킨 주소가 된다.

  // carr3[0]에 +1을 한 것은 3바이트를 증가시킨 주소가 된다.

  // carr3[0][0]에 +1을 한 것은 1바이트를 증가시킨 주소가 된다.

  printf("%x %x %x %x\n", carr3 + 1, *carr3 + 1, **carr3 + 1, ***carr3 + 1);
  // line 8과 동일.

  /*
  89fffa94 89fffa94 89fffa94 41
  89fffa9a 89fffa97 89fffa95 42
  89fffa9a 89fffa97 89fffa95 42
  */
}