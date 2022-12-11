#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

/*#define MAX_NLEN    20 //최대 이름 길이
typedef struct{//구조체 정의
char name[MAX_NLEN + 1];//이름
    int num; //번호
    char manito_name[MAX_NLEN + 1];//마니또 이름
}Manito;

Manito *mani;
int people_num;
*/

void Initialize(); //초기화
void Run();
int SelectMenu();//메뉴 출력 및 선택

int main(void){

    Initialize();
    Run();
    return 0;
}

void Initialize()
{
    int i = 0;
    int s = 0;

    printf("두구두구 마니또를 시작할 건데요!! 잠깐!!!!! 몇 명이서 진행하시죠?!\n");
    scanf("%d", &people_num);
    mani = (Manito *)malloc(sizeof(Manito)*people_num);//동적 배열 메모리 할당
    memset(mani, 0, sizeof(Manito)*people_num);//메모리 초기화
}

void Run()
{
    int key = 0;
    while ((key = SelectMenu()) != 0)//선택한 메뉴가 0이 아니면 반복
    {
        switch (key)//선택한 키에 따라 기능 수행
        {
        case 1: Input(); break;
        case 2: Search(); break;
        case 3: Match(); break;
        case 4: Output(); break;
        default: printf("삐빅-- 틀렸습니다. 다시 하셔야겠는디요?\n"); break;
        }
    }
    printf("그럼 종료할게요~ 다음에 만나요~~~~~\n");
}

int SelectMenu(){
    int key = 0;
    printf("마니또 프로그램인뎁쇼?\n");
    printf("종료: 0\n 입력: 1\n 검색:2\n 맞추기:3\n 출력:4\n");
    scanf("%d", &key);
    return key;
}

void shuffle(int *arr, int num)
{
    srand(time(NULL));  
    int temp;
    int rn;
    for (int i=0; i < num-1; i++)
    {
        rn = rand() % (num - i) + i;    // i 부터 num-1 사이에 임의의 정수 생성
        temp = arr[i];
        arr[i] = arr[rn];
        arr[rn] = temp;
    }
}



