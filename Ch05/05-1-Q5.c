/*
    Author : Lisemara
    Date   : 21-06-03
    Page   : 119
    Summary: scanf 함수와 ASCII 코드를 활용한 문제입니다.
             ASCII 코드에 대한 질문을 해결하는 문제입니다.

*/

#include <stdio.h>

// 
int main(void){
    char ascii_input;

    printf("알파벳 하나를 입력해주세요: ");
    scanf("%c", &ascii_input);

    printf("입력한 문자: %c\n", ascii_input);
    printf("아스키 코드: %d\n", ascii_input);
    return 0;
}