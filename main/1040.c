/*문졔: 입력된 정수의 부호를 바꿔 출력해보자.
단, -2147483647 ~ +2147483647 범위의 정수가 입력된다.
링크: https://codeup.kr/problem.php?id=1040*/

#include <stdio.h>

int main() {
    long int x; // int의 범위를 넘어설 수 있으므로 long int 선언

    scanf("%ld", &x); // 입력받고
    printf("%ld", -x); // 출력하기
}
