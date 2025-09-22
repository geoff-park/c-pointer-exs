// 4-2 char형 배열의 주소를 char형 1차원 포인터에 저장
#include <stdio.h>
void main() {
  char carr[3] = {'A', 'B', 'C'};
  char* cp = carr;  // char형 배열의 이름은 1차원 char형 주소 -> 1차원 char형 포인터에 저장

  printf("%c %c %c \n", carr[0], carr[1], carr[2]);
  printf("%c %c %c \n", *carr, *(carr + 1), *(carr + 2));

  printf("%c %c %c \n", cp[0], cp[1], cp[2]);
  printf("%c %c %c \n", *cp, *(cp + 1), *(cp + 2));
}