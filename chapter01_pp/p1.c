#include <stdio.h>
void main() {
  char c = 'A';
  int n = 10;
  long l = 10l;
  float f = 5.25f;
  double d = 5.25;

  printf("%d\n", sizeof(c));  // 1
  printf("%d\n", sizeof(n));  // 4
  printf("%d\n", sizeof(l));  // 4
  printf("%d\n", sizeof(f));  // 4
  printf("%d\n", sizeof(d));  // 8
  puts("======================");
  printf("%d\n", sizeof(&c));  // 8
  printf("%d\n", sizeof(&n));  // 8
  printf("%d\n", sizeof(&l));  // 8
  printf("%d\n", sizeof(&f));  // 8
  printf("%d\n", sizeof(&d));  // 8
  // 포인터의 크기가 모두 8인 이유는, 64비트 운영체제 사용 중이기 때문!
}
