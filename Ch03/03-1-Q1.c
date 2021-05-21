/*
    Author : Lisemara
    Date   : 21-05-21
    Page   : 74
    Summary: scanf 함수의 다양한 활용을 연습하는 문제 중 1번째 코드입니다. 

*/

#include <stdio.h>

// 
int main(void){
    int num1, num2;

    printf("정수 2개를 입력해주세요: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\n%d - %d = %d \n", num1, num2, num1-num2);
    printf("%d X %d = %d \n", num1, num2, num1*num2);
    return 0;
}