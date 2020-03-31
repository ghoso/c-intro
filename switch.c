#include <stdio.h>

int main(void){
    int tanaka_id = 1;
    int suzuki_id = 2;
    int kobayashi_id = 3;
    int user_id = suzuki_id;

    switch (user_id){
        case 1:
            printf("Tanaka\n");
        break;
        case 2:
            printf("Suzuki\n");
        break;
        default:
            printf("Unknown User\n");
    }
}