/*
    Author : Lisemara
    Date   : 21-05-22
    Page   : 83
    Summary: Q 04-1 - 진법을 이해하기 위해 푸는 문제입니다.

*/

#include <stdio.h>
#include <math.h>

// 
int main(void){
    printf("4bit, 1byte, 4bytes로 표현할 수 있는 데이터 수는?\n");
    printf("4bit: %.0f개\n", pow(2,4));
    printf("1byte: %.0f개\n", pow(2,8));
    printf("4byte: %.0f개\n", pow(2,32));

    return 0;
}