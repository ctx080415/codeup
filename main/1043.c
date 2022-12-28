#include <stdio.h>
int main(void) {
    int x; // 변수 선언
    int y;
    
    scanf("%d %d", &x, &y); // 공백을 사이로 문자 입력받기
    printf("%d", x % y); // % 연산자를 이용하여 나머지 출력
    
    return 0;
}
