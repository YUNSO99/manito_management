#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NLEN    20 //최대 이름 길이

void Initialize(); //초기화
void Run();

typedef struct{//구조체 정의
    char name[MAX_NLEN + 1];//이름
    int num; //번호
    char manito_name[MAX_NLEN + 1];//마니또 이름
    struct node* next;
}Manito;

char name[20];
Manito *mani;
int people_num;

int SelectMenu();//메뉴 출력 및 선택
void Input();
void Search();
void Match();
void Output();
