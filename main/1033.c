/*문제: 10진수를 입력받아 16진수(hexadecimal)로 출력해보자(대문자).
링크: https://codeup.kr/problem.php?id=1033 */

#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);
    printf("%X", x);
}