/*문제: 정수 2개(a, b) 를 입력받아 a를 b로 나눈 몫을 출력해보자.
단, -2147483648 <= a <= b <= +2147483647, b는 0이 아니다.
링크: https://codeup.kr/problem.php?id=1042*/

#include <stdio.h>
int main(void) {
    int x; // 변수 선언
    int y;
    scanf("%d %d", &x, &y); // 공백을 기준으로 수를 입력받음
    printf("%d", x/y); // 나누고 몫 출력
}
