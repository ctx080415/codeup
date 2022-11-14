/* 문제:년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
연, 월, 일이 ".(닷)"으로 구분되어 입력된다.
입력 예시   
2013.8.5

출력 예시
2013.08.05
링크: https://codeup.kr/problem.php?id=1019
*/

#include <stdio.h>

int main() {
    int year; // 변수 선언
    int month;
    int day;

    scanf("%d.%d.%d", &year, &month, &day); // .으로 구분하여 년, 달, 일을 입력받음
    printf("%04d.%02d.%02d", year, month, day); // .을 구분하여 출력함 (%d 대신 %02d를 사용하면 두자릿수로 출력할 수 있는데, 여기서 한 자리 수일 경우엔 앞에 0을 붙임.)

    return 0;

}
