// 3-15 int형 1차원 배열과 2차원 배열의 크기 출력
#include <stdio.h>
void main() {
  int iarr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%d %d\n", sizeof(iarr1), sizeof(iarr2));                             // 36 36
  printf("%d %d %d\n", sizeof(iarr2[0]), sizeof(iarr2[1]), sizeof(iarr2[2]));  // 12 12 12

  // int형은 4바이트
  // iaar1: 1차원 int형 배열의 시작 주소
  // iarr2: 2차원 int형 배열의 시작 주소
  // iarr2[0]: 2차원 배열의 0행의 대표 주소
  // iarr2[1]: 2차원 배열의 1행의 대표 주소
}