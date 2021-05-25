/*
    Author : Lisemara
    Date   : 21-05-25
    Page   : 91
    Summary: 부동 소수점 오차에 대한 이해를 돕기 위한 예제 코드입니다.

*/

#include <stdio.h>

int main(void){
    int i;
    float num=0.0;

    for(i=0; i<100; i++)
        num += 0.1; // 이 연산을 총 100회 진행
    
    printf("0.1을 100번 더한 결과: %f \n", num); // 10이 아닌 10.000002가 나옴
    return 0;
}