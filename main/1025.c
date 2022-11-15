/* 문제: 다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.
링크: https://codeup.kr/problem.php?id=1025 
*/

#include <stdio.h>

int main() {
    int a,b,c,d,e; // 변수 다섯개 선언
    scanf("%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e); // 5자리 숫자를 1개의 숫자로 구분하여 5개의 변수에저장
    printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", a*10000, b*1000, c*100, d*10, e); // 줄바꿈 하여 출력

    return 0;
}
