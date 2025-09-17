// 3-20 char형 2차원 배열 이름을 사용하여 첫 번째 배열 요소에 접근
#include <stdio.h>
void main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%p %p %d \n", carr2, *carr2, **carr2);
  printf("%p %p %d \n", carr2, carr2[0], carr2[0][0]);

  /*
  00000068DEFFF81C 00000068DEFFF81C 65
  00000068DEFFF81C 00000068DEFFF81C 65
  */
}