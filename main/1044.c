/* 문제: 정수를 1개 입력받아 1만큼 더해 출력해보자.
단, -2147483648 ~ +2147483647 의 범위로 입력된다.
링크: https://codeup.kr/problem.php?id=1044*/

#include <stdio.h>
int main(void) {
    long int a; // 변수 a 선언
    scanf("%ld", &a); // 변수값 받기    
    a++; // ++연산자를 사용하여 1을 더한다
    printf("%ld", a); // 출력

    return 0;
}
