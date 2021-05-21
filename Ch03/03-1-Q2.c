/*
    Author : Lisemara
    Date   : 21-05-22
    Page   : 74
    Summary: scanf 함수의 다양한 활용을 연습하는 문제 중 2번째 코드입니다. 

*/

#include <stdio.h>

// 
int main(void){
    int num1, num2, num3;

    printf("정수 3개를 입력해주세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("\n%d X %d + %d = %d \n", num1, num2, num3, num1*num2+num3);

    return 0;
}