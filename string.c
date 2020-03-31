#include <stdio.h>

int main(void){
    char *str1 = "Hello";
    char *str2 = "World !";
    char copy_str[20];

    sprintf(copy_str, "%s %s\n", str1, str2);
    printf("%s\n", copy_str);
}