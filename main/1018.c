/* 문제:
어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자.
링크: https://codeup.kr/problem.php?id=1018
*/

#include <stdio.h>

int main() {
    int hour; // 변수 'hour'선언
    int minute; // 변수 'minute' 선언
    scanf("%d:%d", &hour, &minute); //시간:분으로 입력되는 것을 :를 떼고 시간과 분을 각각 저장함
    printf("%d:%d", hour, minute); // 시간:분 으로 출력

    return 0; // 끝
}
