/* 문제: 윈도우 운영체제의 파일 경로를 출력하는 연습을 해보자.
 
파일 경로에는 특수문자들이 포함된다.

다음 경로를 출력하시오.

"C:\Download\hello.cpp"
(단, 큰따옴표도 함께 출력한다.) 
링크: https://codeup.kr/problem.php?id=1007 */

#include <stdio.h>

int main() {
    printf("\"C:\\Download\\hello.cpp\""); // \를 출력하려면, \를 두 번 입력해야합니다.
    
    return 0;
}
