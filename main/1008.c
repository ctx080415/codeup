/* 문제: 이번에는 특수문자를 출력하는 연습을 해보자.

키보드로 입력할 수 없는 다음 모양을 출력해보자.
(** 참고 : 운영체제의 문자 시스템에 따라 아래와 같은 모양이 출력되지 않을 수 있다.)

┌┬┐
├┼┤
└┴┘
링크:https://codeup.kr/problem.php?id=1008

 */


#include <stdio.h>

int main()
{
   printf("\u250C\u252C\u2510\n"); // 특수문자
   printf("\u251C\u253C\u2524\n"); // 특수문자
   printf("\u2514\u2534\u2518\n"); // 특수문자
  return 0;
}


