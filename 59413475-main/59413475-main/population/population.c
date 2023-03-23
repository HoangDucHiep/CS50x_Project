#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int stSize,enSize,n = 0;
    // TODO: Prompt for start size
    do{
        printf("Start size: ");
        scanf("%d", &stSize);
    }while(stSize < 9);

    // TODO: Prompt for end size
    do{
        printf("End size: ");
        scanf("%d", &enSize);
    }while(enSize < stSize);
    // TODO: Calculate number of years until we reach threshold
    while(stSize < enSize){
        int temp = stSize;
        stSize = stSize + temp/3 - temp/4;
        n++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", n);
}
