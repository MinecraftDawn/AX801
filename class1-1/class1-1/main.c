#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int y = 10;

    y += ++x++;

    printf("%d \n", y);
    printf("%d \n", x);

    system("pause");
    return 0;
}
