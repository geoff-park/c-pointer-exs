// 3-19 char형 2차원 배열 주소의 덧셈
#include <stdio.h>
void main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%p %p %p %p \n", &carr2[0][0], carr2, carr2[0], carr2[1]);
  printf("%p %p %p %p \n", &carr2[0][0] + 1, carr2 + 1, carr2[0] + 1, carr2[1] + 1);
  /*
  0000003A3EFFFB0C 0000003A3EFFFB0C 0000003A3EFFFB0C 0000003A3EFFFB0E
  0000003A3EFFFB0D 0000003A3EFFFB0E 0000003A3EFFFB0D 0000003A3EFFFB0F
  */

  // 0C
  // 0D
  // 0E
  // 0F

  /*
  - &carr2[0][0]은 char형 1바이트의 주소를 의미: +1은 1바이트의 주소를 덧셈하라는 의미이다.
  - carr2: char형 배열 2*2의 시작 주소를 의미: +1은 열의 바이트수인 2바이트의 주소를 건너뛰라는 의미이다.
  - carr2[0]: 0행의 시작 주소를 의미: 1차원 char형 주소 -> +1은 char형 1바이트의 주소를 건너뛰라는 의미이다.

  - 또 carr2는 char형 2차원 배열 -> char형의 2차원의 의미를 갖는다.
  - carr2[0], carr2[1], &caar2[0][0]는 1차원의 의미를 갖는다.

  즉,
  caar2 ---> caar2[0] ---> caar2[0][0]
                      ---> caar2[0][1]
        ---> caar2[1] ---> caar2[1][0]
                      ---> caar2[1][1]
  */
}