/* 문제: 주민번호 앞 6자리와 뒷 7자리가 '-'로 구분되어 입력된다.
'-'를 제외한 주민번호 13자리를 모두 붙여 출력한다.
링크: https://codeup.kr/problem.php?id=1020
*/

#include <stdio.h>

int main() {
    int first; // 변수 선언
    int second;

    scanf("%d-%d", &first, &second); // -를 구분하여 주민번호 앞자리와 뒷자리 구분
    printf("%06d%07d", first, second); // 앞자리 6자와 뒷자리 7자를 붙여 출력함.

    return 0;
}