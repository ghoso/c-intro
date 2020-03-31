#include <stdio.h>

/* プロトタイプ宣言 */
int calc_tax(int);

int main(void){
    int syohin_price = 3000;
    int syohin_tax = 0;

    /* 関数呼び出し */
    syohin_tax = calc_tax(syohin_price);
    printf("Syohin price = %d\n", syohin_price + syohin_tax);
}

/* 関数 消費税計算 */
int calc_tax(int price){
    return price * 0.1;
}