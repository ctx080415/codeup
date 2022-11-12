/* 문제: 실수(float) 1개를 입력받아 저장한 후,
저장되어 있는 값을 소수점 셋 째 자리에서 반올림하여
소수점 이하 둘 째 자리까지 출력하시오.
링크: https://codeup.kr/problem.php?id=1015
*/

#include <stdio.h>

#include <stdio.h>
int main(void) {
    float x; //소수 x 선언
    
    scanf("%f", &x); // x 값 입력받음
    printf("%.2f", x); // x를 소수 셋 째 자리에서 반올림 후, 둘 째 자리까지만 출력
    
    return 0; //함수 종료
}