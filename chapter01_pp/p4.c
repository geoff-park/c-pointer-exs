#include <stdio.h>
void main() {
  int n = 0x11223344;

  printf("%x\n", *(char*)&n);   // 1바이트 읽기 -> 44
  printf("%x\n", *(short*)&n);  // 2바이트 읽기 -> 3344
  printf("%x\n", *(int*)&n);    // 4바이트 읽기 -> 11223344
}