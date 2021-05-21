/*
    Author : Lisemara
    Date   : 21-05-22
    Page   : 74
    Summary: scanf 함수의 다양한 활용을 연습하는 문제 중 5번째 코드입니다. 

*/

#include <stdio.h>

// 
int main(void){
    // 정수 입력받을 변수 선언
    int num1, num2, num3;

    // 정수 입력받는 부분
    printf("정수 3개를 입력해주세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // 입력받은 정수로 계산하는 부분
    // printf에서 %는 output format에 사용되는 기호이므로 두번 사용해야 출력됨
    printf("\n(%d - %d) X (%d + %d) X (%d %% %d)= %d \n",
    num1, num2, num2, num3, num3, num1, (num1-num2)*(num2+num3)*(num3%num1));

    return 0;
}