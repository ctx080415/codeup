/* 
문제: 정수 2개(a, b) 를 입력받아 a를 b로 나눈 나머지를 출력해보자.
링크: https://codeup.kr/problem.php?id=1043*/
#include <stdio.h>
int main(void) {
    
    int x; // 변수 선언
    int y;
    
    scanf("%d %d", &x, &y); // 공백을 사이로 문자 입력받기
    printf("%d", x % y); // % 연산자를 이용하여 나머지 출력
    
    return 0;
}
