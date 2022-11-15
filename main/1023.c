/*문제: 실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력한다.
링크: https://codeup.kr/problem.php?id=1023*/

#include <stdio.h>

int main() {

    int integer; // 변수 선언
    int decimal;
    scanf("%d.%d", &integer, &decimal); // 소숫점과 정수를 나누어 입력 받고 저장
    printf("%d\n%d", integer, decimal); // 정수와 소수를 나누어 출력.

    return 0;
}