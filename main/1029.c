/*문제: 실수 1개를 입력받아 그대로 출력해보자.
(단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.)
링크: https://codeup.kr/problem.php?id=1029
*/

#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%11lf",x);

    return 0;
}