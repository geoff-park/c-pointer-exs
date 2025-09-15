// 1번 문제와 사실상 동일한 문제

#include <stdio.h>
void main() {
  printf("%d\n", sizeof(char));    // 1
  printf("%d\n", sizeof(int));     // 4
  printf("%d\n", sizeof(long));    // 4
  printf("%d\n", sizeof(float));   // 4
  printf("%d\n", sizeof(double));  // 8
  puts("=======================");
  printf("%d\n", sizeof(char*));    // 8
  printf("%d\n", sizeof(int*));     // 8
  printf("%d\n", sizeof(long*));    // 8
  printf("%d\n", sizeof(float*));   // 8
  printf("%d\n", sizeof(double*));  // 8
}