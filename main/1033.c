/*문제: 10진수를 입력받아 16진수(hexadecimal)로 출력해보자(대문자).
링크: https://codeup.kr/problem.php?id=1033 */

#include <stdio.h>

int main() {
    int x; // 변수 선언

    scanf("%d", &x); // 값 입력받고 저장
    printf("%X", x); //  %X를 사용하면 16진수가 대문자로 출력됨.
    
    return 0;
}
