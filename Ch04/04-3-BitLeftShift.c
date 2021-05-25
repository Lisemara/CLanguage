/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 98
    Summary: 비트 연산자(Left Shift)에 대한 이해를 돕기 위한 예제 코드입니다.

*/

#include <stdio.h>

int main(void){
    int num = 15; // 00000000 00000000 00000000 00001111
 
    int result1 = num<<1;
    int result2 = num<<2;
    int result3 = num<<3;

    printf("1칸 이동 결과: %d \n", result1);
    printf("2칸 이동 결과: %d \n", result2);
    printf("3칸 이동 결과: %d \n", result3);
    return 0;
}