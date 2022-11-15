/*문제: 입력되는 시:분:초 에서 분만 출력해보자.
링크: https://codeup.kr/problem.php?id=1026 */

#include <stdio.h>

int main() {
    int hour; // 변수 선언
    int minute;
    int second;

    scanf("%d:%d;%d", &hour, &minute, &second); // 시:분:초를 나누어 입력받음
    printf("%d", minute); // 분만 출력.

    return 0;
}