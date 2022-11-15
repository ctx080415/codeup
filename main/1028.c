/*문제: 정수 1개를 입력받아 그대로 출력해보자.
(단, 입력되는 정수의 범위는 0 ~ 4,294,967,295 이다.)

링크: https://codeup.kr/problem.php?id=1028 */

#include <stdio.h>

int main() {

    unsigned int x; // 큰 값을 받기 위해 usigned int 선언

    scanf("%u", &x); // 입력받고 저장
    printf("%u", x); // 출력

    return 0;
}