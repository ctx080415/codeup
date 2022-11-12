/* 문제:int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력해보자.
링크: https://codeup.kr/problem.php?id=1017
 */

#include <stdio.h>

int main(void) {
    int x; // 정수 x 선언
    
    scanf("%d", &x); // x 값 입력받기
    printf("%d %d %d", x, x, x); // x를, 공백으로 구분 하여 세 번 출력
}