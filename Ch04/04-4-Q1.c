/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 100
    Summary: Q 04-4-1 - 비트 연산을 이해하기 위해 푸는 문제입니다.
             입력받은 정수 값의 부호를 바꿔서 출력하는 프로그램입니다.

*/

#include <stdio.h>

int main(void){
    int num;

    // 정수 입력받기
    printf("음수로 변환할 정수를 입력해주세요: ");
    scanf("%d", &num);
    
    // 정수 음수로 변환하기
    int minusnum = ~num + 1;

    // 결과값 출력하기
    printf("입력한 정수: %d\n", num);
    printf("음수로 변환된 정수: %d", minusnum);

    return 0;
}