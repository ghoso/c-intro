#include <stdio.h>

int main(void){
    int taro_age = 23;
    int hanako_age = 8;
    int somebody_age;

    somebody_age = taro_age;
    if (somebody_age < 20){
        printf("Child\n");
    } else {
        printf("Adult\n");
    }
}