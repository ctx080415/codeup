/* 문제: 실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
저장되어 있는 실수값을 출력해보자.
링크: https://codeup.kr/problem.php?id=1012*/


#include <stdio.h>

int main(void) {
    float x; // 실수 x 선언
    scanf("%f", &x); // 실수 값 인력
    printf("%f", x); // 실수 x 출력
    
    return 0;
}