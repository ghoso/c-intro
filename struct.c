#include <stdio.h>
#include <string.h>

typedef struct w_person {
    int id;
    char name[30];
    char role[10];
} WPerson;

int main(void){
    WPerson leader;

    /* 構造体初期化 */
    leader.id = 1;
    strncpy(leader.name,"Yamada Taro", 12);
    strncpy(leader.role,"Engineer", 9);

    /* 構造体メンバー出力 */
    printf("leader.id = %d\n", leader.id);
    printf("leader.name = %s\n", leader.name);
    printf("leader.role = %s\n", leader.role);
}