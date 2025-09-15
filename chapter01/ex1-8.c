/* 1-8 int형 주소의 덧셈 */
#include <stdio.h>
void main() {
  int n1 = 100;
  int n2 = 200;
  printf("%x\n", &n1);      // cedff6fc
  printf("%x\n", &n1 + 1);  // cedff700 = cedff6fc + 4
  printf("%x\n", &n2);      // cedff6f8
  printf("%x\n", &n2 + 1);  // cedff6fc = cedff6f8 + 4
}

/*
char형 주소에 +1을 하면 주소 하나가 증가하고
int형 주소에 +1을 하면 주소 4개가 증가한다.

** 가지고 있는 데이터만큼 주소를 건너뛴다. **
** 시작 수조(대표 주소)마다 그 의미가 다르다. **

변수의 주소도 자료 형식이 존재한다. 즉,
  - char형 변수의 시작 주소는 1바이트 char형 메모리의 대표 주소를 의미하고,
  - int형 변수의 시작 주소는 4바이트 int형 메모리의 대표 주소를 의미한다.
 */