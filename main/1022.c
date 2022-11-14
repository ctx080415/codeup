/* 문제: 공백 문자가 포함되어 있는 문장을 입력받고 그대로 출력하는 연습을 해보자.
링크: https://codeup.kr/problem.php?id=1022
*/

#include <stdio.h>

int main() {
    char a[2001]; // 공백이 포함된 글자를 2000자 까지 입력 가능
    fgets(a,2000,stdin);//최대 2000글자 까지 읽고, stdin(키보드)로 입력받는다.
    printf("%s", a); // 출력

    return 0;
}