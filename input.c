#include <stdio.h>

#include "main.h"

int IsAvailNum(int num)//유효한 번호인지 판별
{
    return (num >= 1) && (num <= people_num);
};

void Input(){
    printf("짜잔~~ 당신만의 시크릿산타! 마니또를 시작하려면 입력을 해주셔야겠죠?\n 입력은 번호를 먼저 적어주시고, {이름: 홍길동} <- 와 같이 성함을 적어주시는 거랍니다??\n");

    int num = 0;
    Manito *man = 0;
    Manito *tmp_node = NULL;
    int s = 0;
    
    

    printf("추가할 번호(1~%d): ", people_num);
    scanf("%d", &num);

    if (IsAvailNum(num) == 0)//유효한 번호가 아닐 때
    {
        printf("어라~?! 범위를 벗어났어요!!!!\n");
        return;
    }

    if (mani[num - 1].num)//이미 번호를 설정한 상태일 때
    {
        printf("혹시,,, 동명이인인가요? 같은 번호는 설정할 수 없어요!!\n");
        return;
    }

    //mani에는 1번 데이터를 관리하는 메모리 주소
    //따라서 mani+(num-1)은 num번 데이터를 관리하는 메모리 주소
    man = mani + (num - 1);
    man->num = num;
    man->next = tmp_node;
    tmp_node = man;
    
    printf("이름: ");
    scanf("%s", man->name);

    //fprintf(fp, "%d %s\n", num, name);
    return;
};


