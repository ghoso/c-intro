#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *f;
    char s[256];

    /* ファイルオープン */
    f = fopen("test.txt","r+");
    if (f == NULL){
        fprintf(stderr, "file %s open failed\n");
        exit(-1);
    }
    /* 文字列をファイルに書き込んでファイルクローズ */
    fputs("Hello C language!\n" ,f);
    fclose(f);

    /* 再度、読み込みモードでファイルオープン */
    f = fopen("test.txt","r");
    if (f == NULL){
        fprintf(stderr, "file %s open failed\n");
        exit(-1);
    }
    /* 読み込みバッファ初期化 */
    memset(s, 0, 256);
    /* ファイル読み込み */
    fgets(s, 256, f);
    /* 読み込みデータを出力してファイルクローズ */
    printf("%s",s);
    fclose(f);
}