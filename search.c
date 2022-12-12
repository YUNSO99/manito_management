#include "main.h"

void ViewData(Manito *man)
{

    printf("%4d %10s %4d", man->num, man->name, man->manito_name);
    printf("\n");
}

void Search(){
    int num = 0;
    int s = 0;
    Manito *man = 0;

    printf("검색할 사람의 번호(1~%d): ", people_num);
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

    man = mani + (num - 1);
    printf("%4s %10s %10s\n", "번호", "이름", "마니또");
    ViewData(man);
}