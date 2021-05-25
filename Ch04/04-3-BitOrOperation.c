/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 93
    Summary: 비트 연산자(OR)에 대한 이해를 돕기 위한 예제 코드입니다.

*/

#include <stdio.h>

int main(void){
    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = 20; // 00000000 00000000 00000000 00010100
    int num3 = num1 | num2; // num1과 num2의 bit단위 or연산

    printf("OR 연산의 결과: %d \n", num3); // 00011111 이 됨
    return 0;
}