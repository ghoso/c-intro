#include <stdio.h>
#define TRIG_AREA(A,B,H)  ((A)+(B))*(H)/2

int main(void){
   int a =2;
   int  b = 10;
   int  h = 3;

   printf("%d\n",TRIG_AREA(a, b, h+1));
}
