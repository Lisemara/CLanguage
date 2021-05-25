/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 97
    Summary: 비트 연산자(NOT)에 대한 이해를 돕기 위한 예제 코드입니다.

*/

#include <stdio.h>

int main(void){
    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = ~num1;

    printf("NOT 연산의 결과: %d \n", num2); // 11111111 11111111 11111111 11110000이 됨
    return 0;
}