#include <stdio.h>
int main()
{

    int a, b; //변수 선언
    scanf("%d %d", &a, &b); // 입력 받기
    printf("%d\n", a+b); // 더해서 출력 + 줄바꿈
    printf("%d\n", a-b); // 빼서 출력 + 줄바꿈
    printf("%d\n", a*b); // 곱해서 출력 + 줄바꿈
    printf("%d\n", a/b); // 나누어서 출력 + 줄바꿈
    printf("%d\n", a%b); // 나머지를 출력 + 줄바꿈
    printf("%.2lf", (float)a/b); // %.2를 사용하여 소수 두번째 자리까지만 출력, a/b를 float을 사용하여 소수로 출력

    return 0;
}
