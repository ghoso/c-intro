#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *mymem;

    /* メモリー確保 */
    mymem = (char *)malloc(100);
    if (mymem == NULL){
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    printf("mymem is allocated\n");
    /* メモリー初期化 */
    memset(mymem, 0, 100);
    printf("mymem is initialized\n");
    /* メモリー解放 */
    free(mymem);
    printf("mymem is freed\n");

    return 0;
}