/*문제: 실수 1개를 입력받아 그대로 출력해보자.
(단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.)
링크: https://codeup.kr/problem.php?id=1029
*/

#include <stdio.h>

int main() {
    double x; // double = 소수점 이하 15자리까지 나타낼 수 있음.
    scanf("%lf", &x); // %lf = long float으로, double을 사용할때 씀
    printf("%11lf",x); // 출력

    return 0;
}
