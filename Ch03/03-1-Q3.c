/*
    Author : Lisemara
    Date   : 21-05-22
    Page   : 74
    Summary: scanf 함수의 다양한 활용을 연습하는 문제 중 3번째 코드입니다. 

*/

#include <stdio.h>

// 
int main(void){
    int num1;

    printf("정수 1개를 입력해주세요: ");
    scanf("%d", &num1);
    
    printf("\n%d^2 = %d \n", num1, num1 * num1);

    return 0;
}