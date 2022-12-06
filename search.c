#include "main.h"

void ViewData(Manito *man)
{
    int i = 0;
    int s = 0;

    printf("%4d %10s ", man->num, man->name);
    for (s = 0; s<MAX_NLEN+1; s++)
    {
        printf("%4d ", man->manito_name[s]);
    }
    printf("\n");
}

void Search(){
    int num = 0;
    Manito *man = 0;
    int s = 0;

    printf("검색할 사람의 번호(1~%d): ", people_num);
    scanf("%d", &num);

    if (((num >= 1) && (num <= people_num)) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 학생 번호입니다.\n");
        return;
    }

    if (mani[num - 1].num == 0)//번호를 설정한 상태가 아닐 때
    {
        printf("데이터가 없습니다.\n");
        return;
    }

    man = mani + (num - 1);
    ViewData(man);
}