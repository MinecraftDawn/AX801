#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1;i <= 9; i++){ // 印出N次
        for(int j = 1; j <= i; j++){ //每一次印出那些數字
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
