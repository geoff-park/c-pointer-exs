// 3-21 char형 2차원 배열 이름을 사용하여 값에 접근 (1)
#include <stdio.h>
void main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%p %p %d \n", carr2 + 1, *(carr2 + 1), **(carr2 + 1));
  printf("%p %p %d \n", carr2 + 1, carr2[1], carr2[1][0]);

  /*
  000000946E9FF93E 000000946E9FF93E 67
  000000946E9FF93E 000000946E9FF93E 67

  carr2 + 1 은 carr2에 2바이트(행의 크기) 증가한 2차원 주소의 의미
  *(carr2 + 1) 은 2차원 주소에 * 를 붙여 1차원 주소를 의미
  **(caar2 + 1)은 메모리 자체를 의미한다.
  */
}