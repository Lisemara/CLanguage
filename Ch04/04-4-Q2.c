/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 100
    Summary: Q 04-4-2 - 비트 연산을 이해하기 위해 푸는 문제입니다.
             3x8÷4를 *,/연산자를 사용하지 않고 연산하는 프로그램입니다.

*/

#include <stdio.h>

int main(void){
    // *, / 연산자로 연산해보기
    printf("3x8÷4 = %d\n", 3*8/4);
    
    // *, / 연산자를 사용하지 않고 연산하기
    printf("3x8÷4 = %d\n", 3<<3>>2);

    return 0;
}