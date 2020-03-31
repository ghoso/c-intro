#include <stdio.h>

int main(void){
    /* 価格リスト */
    int price_list[] = {3000, 1500, 12000, 4500};
    /* 価格合計 */
    int price_total = 0;

    /* 配列スキャンして合計する */
    for (int i = 0; i < 4; i++){
        price_total += price_list[i];
    }

    printf("price total = %d\n", price_total);
}