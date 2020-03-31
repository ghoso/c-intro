#include <stdio.h>

int main(void){
#ifdef DEBUG
    printf("DEBUG macro on\n");
#else
    printf("DEBUG macro off\n");
#endif
}