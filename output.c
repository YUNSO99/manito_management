#include "main.h"

void Data(Manito *man)
{

    printf("%4d %10s %4s", man->num, man->name, man->manito_name);
    printf("\n");
}

void Output(){
    int i = 0;
    int s = 0;

    printf("%4s %10s %10s\n", "번호", "이름", "마니또");
    for (i = 0; i<people_num; i++)
    {
        if (mani[i].num)
        {
            Data(mani + i);
        }
    }
}