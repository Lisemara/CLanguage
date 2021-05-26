/*
    Author : Lisemara
    Date   : 21-05-26
    Page   : 113
    Summary: 실수 표현을 위한 자료형 선택에 대한 이해를 돕는 예제 코드입니다.

*/

#include <stdio.h>

// 
int main(void){
    double rad;
    double area;
    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);

    area = rad*rad*3.1415;
    printf("원의 넓이: %f \n", area);
    return 0;
}