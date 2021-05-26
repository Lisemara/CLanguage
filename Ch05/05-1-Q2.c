/*
    Author : Lisemara
    Date   : 21-05-26
    Page   : 119
    Summary: scanf 함수와 ASCII 코드를 활용한 문제입니다.
             두 개의 실수를 입력받아 double형 변수에 저장 후 사칙연산 결과를 출력합니다.

*/

#include <stdio.h>

// 
int main(void){
    // 초기 변수 선언
    double x, y;

    // 두 실수 입력받는 부분
    printf("두 개의 실수를 입력해주세요(ex:0.4 1.2): ");
    scanf("%lf %lf",&x, &y);

    // 계산 및 출력
    printf("덧셈: %.2f + %.2f = %.2f\n", x, y, x+y);
    printf("뺄셈: %.2f - %.2f = %.2f\n", x, y, x-y);
    printf("곱셈: %.2f * %.2f = %.2f\n", x, y, x*y);
    printf("나눗셈: %.2f / %.2f = %.2f\n", x, y, x/y);

    return 0;
}