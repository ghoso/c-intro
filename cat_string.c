#include <stdio.h>

int main(void){
    /* １回目に入力された文字列 */
    char first_str[100];
    /* ２回目に入力された文字列 */
    char second_str[100];
    /* 連結された文字列 */
    char u_str[200];

    /* １回目キーボード入力 */
    printf("Please input first string: ");
    scanf("%99s",first_str);
    /* ２回目キーボード入力 */ 
    printf("Please input second string: ");
    scanf("%99s",second_str);
    /* ２つの文字列をくっつける */
    sprintf(u_str, "%s-%s", first_str, second_str);
    printf("%s\n", u_str);
}