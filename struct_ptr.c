#include <stdio.h>
#include <string.h>

typedef struct w_person {
    int id;
    char name[30];
    char role[10];
} WPerson;
void print_person(WPerson*);

int main(void){
    WPerson leader;

    /* 構造体初期化 */
    leader.id = 1;
    strncpy(leader.name,"Yamada Taro", 12);
    strncpy(leader.role,"Engineer", 9);

    /* 構造体出力 */
    print_person(&leader);
}

void print_person(WPerson* pinfo){
    printf("pinfo->id = %d\n", pinfo->id);
    printf("pinfo->name = %s\n", pinfo->name);
    printf("role->role = %s\n", pinfo->role);
}