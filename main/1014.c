/* 문제:2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.
링크: https://codeup.kr/problem.php?id=1014
  */

#include <stdio.h>

int main(void) {
    char x; //문자 'x'선언
    char y; //문자 'y' 선언
    
    scanf("%c %c", &x, &y); //공백을 두고 입력되는 두 문자를, 공백으로 구분하여 x와 y에 저장
    printf("%c %c", y, x); //y와 x를 순서를 바꾸어 출력
    return 0;
}