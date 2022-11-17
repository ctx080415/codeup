/*문제: 10진수를 입력받아 16진수(hexadecimal)로 출력해보자.
링크: https://codeup.kr/problem.php?id=1032*/

#include <stdio.h>

int main() {
    int x; // 변수 선언
    scanf("%d", &x); // 입력받고 저장.
    printf("%x", x); // %x를 사용하면 16진수로 변환됨
    
    return 0;
}
