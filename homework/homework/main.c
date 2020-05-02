#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int arr[6];

    for(int i=0; i<6, i++){
        scanf("%d", &arr[i]);
    }
    */

    int arr32[3][2];
    for(int j=0; j<2; j++){
        for(int i=0; i<3; i++){
            scanf("%d", &arr32[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr32[i][j]);
        }
        printf("\n");
    }

    /*
    int arr32[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            arr32[i][j] = arr23[j][i];
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr32[i][j]);
        }
        printf("\n");
    }
    */



    printf("Hello world!\n");
    return 0;
}
