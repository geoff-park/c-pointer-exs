/* 틀린 부분을 찾아보자.

#include <stdio.h>
void main() {
  int n = 0x10;
  int** npp = &n;
  printf("%x %x %x\n", n, *npp, **npp);
}

// npp는 pointer to pointer
*/

#include <stdio.h>
void main() {
  int n = 0x10;
  int* np = &n;     // fixed here
  int** npp = &np;  // and here
  printf("%x %x %x\n", n, *npp, **npp);
}
