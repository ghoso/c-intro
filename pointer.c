#include <stdio.h>

int main(void){
    int a = 1;
    int *ptr = &a;

    printf("a's address = %p\n", ptr);
}