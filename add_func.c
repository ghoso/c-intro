#include <stdio.h>

/* プロトタイプ宣言 */
int add(int, int);

int main(void){
    int answer = 0;
    int a = 100;
    int b = 300;

    /* add関数呼び出し */
    answer = add(a, b);
    printf("answer = %d\n", answer);
    return 0;
}

/* add関数 */
int add(int a, int b){
    return a + b;
}