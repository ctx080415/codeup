/*문제: 년월일을 출력하는 방법은 나라마다, 형식마다 조금씩 다르다.
년월일(yyyy.mm.dd)를 입력받아,

일월년(dd-mm-yyyy)로 출력해보자.
링크: https://codeup.kr/problem.php?id=1027
 */

#include <stdio.h>

int main() {
    int year; // 변수 선언
    int month;
    int day;

    scanf("%d.%d.%d", &year, &month, &day); // .으로 구분하여 년 월 일 입력받고 저장
    printf("%02d-%02d-%04d", day, month, year); // 문제에 나온대로 일-월-년으로 출력
     
    return 0;
}