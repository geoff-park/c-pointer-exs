/* 2-7 int형 3차원 포인터 nppp 선언 */
#include <stdio.h>
void main() {
  int n = 20;
  int* np;
  int** npp;
  int*** nppp;
  np = &n;
  npp = &np;
  nppp = &npp;

  printf("%d %d %d %d\n", n, *np, **npp, ***nppp);  // 20 20 20 20
  printf("%x %x %x %x\n", &n, np, *npp, **nppp);    // b5dffd94 b5dffd94 b5dffd94 b5dffd94
  printf("%x %x %x\n", &np, npp, *nppp);            // b5dffd88 b5dffd88 b5dffd88

  printf("%d %d %d %d\n", sizeof(int), sizeof(int*), sizeof(int**), sizeof(int***));  // 4 8 8 8
  printf("%d %d %d %d\n", sizeof(n), sizeof(np), sizeof(npp), sizeof(nppp));          // 4 8 8 8
}