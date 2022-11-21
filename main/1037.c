/*10진 정수 1개를 입력받아 아스키 문자로 출력해보자.
단, 0 ~ 255 범위의 정수만 입력된다.
링크: https://codeup.kr/problem.php?id=1037
*/

#include <stdio.h>

int main() {
    int x; // 정수 선언
    scanf("%d", &x); // 정수의 값 입력받기
    printf("%c", x); // %c를 이용하여 아스키 문자로 출력.

    return 0;
}