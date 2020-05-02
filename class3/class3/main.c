#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
    //printf("Swap:%X %X", &num1, &num2);

    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main()
{
    int num1 = 10, num2 = 20;
    printf("Main:%X %X \n", &num1, &num2);

    swap(&num1, &num2);
    printf("%d %d", num1, num2);
    return 0;
}
