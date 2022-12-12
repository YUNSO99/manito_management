#include "main.h"

void Data(Manito *man, FILE* fp)
{

    printf("%4d %10s %6d", man->num, man->name, man->manito_name);
    fprintf(fp, "%4d %10s %6d", man->num, man->name, man->manito_name);
    printf("\n");
    fputs("\n", fp);
}

void Output(){
    int i = 0;
    int s = 0;
    FILE* fp;
    fp = fopen("manito.txt", "w");
    if(fp==NULL){
        printf("fialed");
    }


    printf("%4s %10s %10s\n", "번호", "이름", "마니또");
    fprintf(fp, "%4s %10s %10s\n", "번호", "이름", "마니또");
    for (i = 0; i<people_num; i++)
    {
        if (mani[i].num)
        {
            Data(mani + i, fp);
        }
    }
    Manito * list_head = NULL;
    while(list_head){
        tmp_node = list_head;
        list_head = list_head->next;
        free(tmp_node);
    }
    fclose(fp);

}