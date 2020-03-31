#include <stdio.h>

int main(void){
    int a_price = 10000;
    int b_price = 5000;
    int c_price = 3000;
    int some_price = 0;

    some_price = a_price;
    if (some_price >= 5000){
        some_price = some_price + some_price * 0.1;
    }
    printf("price is %d.\n", some_price);
}