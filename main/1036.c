/*문제: 영문자 1개를 입력받아 아스키 코드표의 10진수 값으로 출력해보자.
링크: https://codeup.kr/problem.php?id=1036*/

#include <stdio.h>

int main() {
    char x = ""; // 문자 선언

    scanf("%c", &x); // 입력받고 저장
    printf("%d", x); // 10진수로 출력

    return 0;
}