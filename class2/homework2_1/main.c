#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1;i <= 9; i++){ // �L�XN��
        for(int j = 1; j <= i; j++){ //�C�@���L�X���ǼƦr
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
