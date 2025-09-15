/* 1-12 char형 변수를 int형 변수에 대입 (2) */
#include <stdio.h>
void main() {
  char c = 5;
  int n;

  n = (int)c;
  printf("%d\n", n);
}

// char형 변수를 int형 변수로 형변환
// = 두 자료형의 크기와 형태(의미)를 같게 하는 것