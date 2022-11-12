/* 문제: 정수(int) 2개를 입력받아 그대로 출력해보자.
링크: https://codeup.kr/problem.php?id=1013
 */

#include <stdio.h>

int main(void) {
    int x; // 정수 x 선언
    int y; //정수 y 선언
    scanf("%d %d", &x, &y); // 공백을 기준으로 x y 입력 받기
    printf("%d %d", x, y); // 공백을 기준으로 x y 출력
    
    return 0;
}