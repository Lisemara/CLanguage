/*
    Author : Lisemara
    Date   : 21-05-26
    Page   : 118
    Summary: scanf 함수와 ASCII 코드를 활용한 문제입니다.
             두 점의 좌표를 입력받고 두 점이 이루는 직사각형의 넓이를 출력합니다.

*/

#include <stdio.h>

// 
int main(void){
    // 초기 변수 선언
    int x1, y1, x2, y2;

    // 두 점의 좌표 입력받는 부분
    printf("첫 번째 점의 x,y 좌표를 입력해주세요(ex:0 4): ");
    scanf("%d %d",&x1, &y1);

    printf("두 번째 점의 x,y 좌표를 입력해주세요(ex:0 4): ");
    scanf("%d %d",&x2, &y2);

    // 가로, 세로, 넓이 계산하는 부분
    int width = x2 - x1;
    int height = y2 - y1;

    int area = width * height;

    // 계산 결과 출력
    printf("입력한 점의 좌표: (%d,%d), (%d,%d)\n",
                            x1, y1, x2, y2);
    printf("계산 결과: 가로 = %d, 세로 = %d, 넓이 = %d",
                            width, height, area);

    return 0;
}