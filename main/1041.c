/*문제: 영문자 1개를 입력받아 그 다음 문자를 출력해보자.
링크: https://codeup.kr/problem.php?id=1041*/

#include <stdio.h>

int main() {
    char x;

    scanf("%c", &x);
    printf("%c", x+1);

    return 0;
}