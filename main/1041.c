/*문제: 영문자 1개를 입력받아 그 다음 문자를 출력해보자.
링크: https://codeup.kr/problem.php?id=1041*/

#include <stdio.h>

int main() {
    char x; // 문자 선언

    scanf("%c", &x); // 입력받고 
    printf("%c", x+1); // 1을 더하기(정수로 나타낸 수)

    return 0;
}
