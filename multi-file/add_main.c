#include <stdio.h>
#include <math.h>
#include "add.h"

int main(void){
    int a = 100;
    int b = 200;

    printf("%d + %d = %d\n", a, b, add(a,b)); 
    printf("PubVar = %d\n", PubVar);
    printf("pow(PubVar) = %.1f\n", pow(PubVar, 2)) ;
}