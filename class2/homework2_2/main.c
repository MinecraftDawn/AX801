#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("請輸入金字塔高度： ");

    scanf("%d", &height);

    for(int i = 1; i < height; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = height; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
