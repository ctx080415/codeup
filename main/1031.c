/*문제: 10진수를 입력받아 8진수(octal)로 출력해보자.
링크: https://codeup.kr/problem.php?id=1031*/

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x); // 10진수 수 입력 받고 저장.
    printf("%o", x); // %o를 이용하여 8진수로 출략

    return 0;
}