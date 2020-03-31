#include <stdio.h>

int count_f(void){
    static int count_num = 0;

    count_num++;
    printf("%d\n",count_num);
}

int main(void){
    count_f();
    count_f();
    count_f();
}
