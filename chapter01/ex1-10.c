/* 1-10 int형 주소에 정수들을 덧셈 */
#include <stdio.h>
void main() {
  int n = 100;

  printf("%x\n", &n);      // 2ddffc4c
  printf("%x\n", &n + 1);  // 2ddffc50
  printf("%x\n", &n + 2);  // 2ddffc54
  printf("%x\n", &n + 3);  // 2ddffc58
}

/* 정리!
주소에 정수를 덧셈하거나 뺄셈하면 결과는 다음과 같이 된다.
---
자료형의 주소 +(-) 정수 * sizeof(자료형) = 자료형의 주소
---
*/