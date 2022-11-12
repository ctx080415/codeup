/* 문제: 정수형(int)으로 변수를 선언하고, 변수에 정수값을 저장한 후
변수에 저장되어 있는 값을 그대로 출력해보자.
링크: https://codeup.kr/problem.php?id=1010
*/
#include <stdio.h>
int main() {
    int x; // 정수 x 선언
    scanf("%d", &x); // 정수 'x'에 값 입력받고 저장
    printf("%d", x); // 정수 x 출력
    return 0; // 함수 끝
}
