/* 1개의 단어를 입력받아 그대로 출력해보자.
한 단어가 입력된다.(단, 단어의 길이는 50자 이하이다.)
링크: https://codeup.kr/problem.php?id=1021
*/

#include <stdio.h>

int main() {
    char x[51]; // 문자를 저장하는 변수
    scanf("%s", &x); // 문자 여러개이기 때문에 %s사용.
    printf("%s", x); // x를 출력.
}
