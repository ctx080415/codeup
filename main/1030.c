/* 정수 1개를 입력받아 그대로 출력해보자.
단, 입력되는 정수의 범위는
-9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 이다.
링크: https://codeup.kr/problem.php?id=1030*/

#include <stdio.h>

int main() {
    long long int x; // 더 큰 범위의 변수 선언
    scanf("%lld", &x); // 입력 받고 저장
    printf("%lld",x); // 출력

    return 0;
}