/* 정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.
(단, 입력되는 정수는 -1073741824 ~ 1073741824 이다.)
링크: https://codeup.kr/problem.php?id=1038
 */

#include <stdio.h>

int main() {
    long int x; // 변수 선언
    long int y; // long int로 선언한 이유는, int의 범위가 –2,147,483,648 ~ 2,147,483,647인데, 만약 입력값이 1073741824가 두 번 나온다면, 값을 넘어서기에 long int로 선언한다.

    scanf("%ld %ld", &x, &y); // x와 y로 값 받기
    printf("%ld", x + y); //x와 y를 더한값을 long int로 출력

    return 0;
}
