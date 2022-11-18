/*문제: 8진수로 입력된 정수 1개를 10진수로 바꾸어 출력해보자.
링크: https://codeup.kr/problem.php?id=1034 */

#include <stdio.h>

int main(void) {
    int x; // 변수 선언
    scanf("%o", &x); // 8진수로 입력받고 저장
    printf("%d", x); // 10진수로 변환해서 출력

    return 0;
}