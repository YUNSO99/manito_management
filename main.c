#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"


void Initialize(); //초기화
void Run();
int SelectMenu();//메뉴 출력 및 선택

void main(void){
    FILE* fp;
    fp = fopen("manito.txt", "w+");
    if(fp==NULL){
        printf("fialed");
    }
    Initialize();
    Run();
    Manito * list_head = NULL;
    while(list_head){
        tmp_node = list_head;
        list_head = list_head->next;
        free(tmp_node);
    }
    fclose(fp);
}

void Initialize()
{
    int i = 0;
    int s = 0;
    Manito *man = 0;

    printf("두구두구 마니또를 시작할 건데요!! 잠깐!!!!! 몇 명이서 진행하시죠?!\n");
    scanf("%d", &people_num);
    mani = (Manito *)malloc(sizeof(Manito)*people_num);//동적 배열 메모리 할당
    memset(mani, 0, sizeof(Manito)*people_num);//메모리 초기화


    srand(time(NULL)); 
    int arr[people_num];
    int arr2[people_num];
    int temp;
    int rn;
    for (int i=0; i < people_num; i++){
        arr[i] = i;
        arr2[i] = i;
    }
    for (int i=0; i < people_num; i++){
        if(arr[i]==arr2[i]){
            for (int i=0; i < people_num; i++){
                rn = rand() % (people_num - i) + i;    // i 부터 people_num-1 사이에 임의의 정수 생성
                temp = arr2[i];
                arr2[i] = arr2[rn];
                arr2[rn] = temp;
    }
        }
        else break;
    }
    
    for (int i=0; i < people_num; i++){
        man = mani + i;
        man->manito_name = arr2[i]+1;
    }
    
    
}

void Run()
{
    int key = 0;
    void(*input)(); input = Input;
    void(*output)(); output = Output;
    void(*search)(); search = Search;
    while ((key = SelectMenu()) != 0)//선택한 메뉴가 0이 아니면 반복
    {
        switch (key)//선택한 키에 따라 기능 수행
        {
        case 1: input(); break;
        case 2: search(); break;
        case 3: output(); break;
        default: printf("삐빅-- 틀렸습니다. 다시 하셔야겠는디요?\n"); break;
        }
    }
    printf("그럼 종료할게요~ 다음에 만나요~~~~~\n");
}

int SelectMenu(){
    int key = 0;
    printf("\n마니또 프로그램인뎁쇼?\n");
    printf("종료: 0\n 입력: 1\n 검색:2\n 출력:3 \n");
    scanf("%d", &key);
    return key;
}





