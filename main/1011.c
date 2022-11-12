/* 문제: 문자형(char)으로 변수를 하나 선언하고, 변수에 문자를 저장한 후
변수에 저장되어 있는 문자를 그대로 출력해보자.
링크: https://codeup.kr/problem.php?id=1011
*/

#include <stdio.h>

int main() {
    char x; // 문자형 변수 'x' 선언
    scanf("%c", &x); // x에 값 입력받고 저장
    printf("%d", x); // x 출력
    
    return 0;// 함수 끝
}
