#include <stdio.h>

int string_len(char*);

int main(void){
    char *msg = "C language for IoT!";

    printf("msg len = %d\n", string_len(msg));
    printf("msg  = %s\n", msg);
}

int string_len(char *str){
    int i = 0;

    /* strがヌルポインタかチェック */
    if (str == NULL){
        return 0;
    }
    /* strの文字列終端までカウンタiをインクリメント */
    while (*str != '\0'){
        i++;
        str++;
    }
    return i;
}