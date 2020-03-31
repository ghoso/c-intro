#include <stdio.h>

/* グローバル変数 */
char str[] ="My name is ";
char myname[] = "Taro Suzuki";

void print_myname(){
    /* ローカル変数 */
    /* char myname[] = "Hanako Yamada"; */
    printf(myname);
}

int main(void){
    printf(str);
    print_myname();
    printf("\n");
}
