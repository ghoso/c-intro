#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int add(int a, int b){
    int ret = 0;

    ret = a + b;
    return(ret);
}

int sub(int a, int b){
    int ret = 0;

    ret = a - b;
    return(ret);
}

int main(void){
    assert(add(10,20) == 30);
    assert(sub(50,15) == 35);
    assert(add(50,15) == 100);

    return EXIT_SUCCESS;
}