#include "main.h"
#include <stdio.h>

void Match(){
    char name_guess[20];
    int num;
    printf("마니또는 잘하셨나요? 당신의 마니또를 맞춰보아요~*^^*\n");
    printf("What your num~? ");
    scanf("%d", &num);

    if (((num >= 1) && (num <= people_num)) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 번호입니다.\n");
        return;
    }
    if (mani[num - 1].num == 0)//번호를 설정한 상태가 아닐 때
    {
        printf("데이터가 없습니다.\n");
        return;
    }

    printf("your 마니또는 누구일까요 ㅎㅎ? ");
    scanf("%s", name_guess);
    
    if (name_guess == mani[num-1].manito_name)
        printf("딩동댕~~ 맞았습니다~\n");
    else printf("땡~~~ 틀렸서요\n");

}