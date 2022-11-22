/*문제:정수 2개를 입력받아 합을 출력해보자.
단, 입력되는 정수는 -2147483648 ~ +2147483648 이다.
링크: https://codeup.kr/problem.php?id=1039*/

#include <stdio.h>

int main() {
    long int x; // 정수 값이 int의 범위를 넘어갈 수 있으므로 long int로 선언한다.
    long int y;

    scanf("%ld %ld", &x, &y); // 입력받고 저장/
    printf("%ld", x + y); // 출력

    return 0;
}