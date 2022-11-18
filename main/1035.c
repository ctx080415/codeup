/*문제: 16진수로 입력된 정수 1개를 8진수로 바꾸어 출력해보자.
링크: https://codeup.kr/problem.php?id=1035 */

#include <stdio.h>

int main(void) {
    int x; // 변수 선언

    scanf("%x", &x); // 16진수 (소문자)값 입력받고 저장
    printf("%o", x); // 8진수로 변환하여 출력

    return 0;
}