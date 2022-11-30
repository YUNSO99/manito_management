#include <stdio.h>

#include "Manito.h"

int IsAvailNum(int num)//유효한 번호인지 판별
{
    return (num >= 1) && (num <= people_num);
}

void Input(){
    printf("짜잔~~ 당신만의 시크릿산타! 마니또를 시작하려면 입력을 해주셔야겠죠?\n
            입력은 번호를 먼저 적어주시고, {이름: 홍길동} <- 와 같이 성함을 적어주시는 거랍니다??\n");
    for (int i=0;)
    scanf("%d")



    int num = 0;
    Student *man = 0;
    int s = 0;

    printf("추가할 학생 번호(1~%d): ", people_num);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 학생 번호입니다.\n");
        return;
    }

    if (mani[num - 1].num)//이미 번호를 설정한 상태일 때
    {
        printf("이미 추가하였습니다\n");
        return;
    }

    //stues에는 1번 학생 데이터를 관리하는 메모리 주소
    //따라서 mani+(num-1)은 num번 학생 데이터를 관리하는 메모리 주소
    man = mani + (num - 1);
    man->num = num;
    printf("이름: ");
    scanf_s("%s", man->name, sizeof(man->name));
    return 0;
}