/*
    Author : Lisemara
    Date   : 21-06-02
    Page   : 119
    Summary: scanf 함수와 ASCII 코드를 활용한 문제입니다.
             ASCII 코드에 대한 질문을 해결하는 문제입니다.

*/

#include <stdio.h>

// 
int main(void){
    int ascii_input;

    printf("정수를 입력해주세요: ");
    scanf("%d", &ascii_input);

    printf("입력한 문자: %c", ascii_input);
    return 0;
}