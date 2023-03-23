#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do{
        height = get_int("Height: ");
    }while((height < 1 || height > 8) );

    int space = height - 1;
    int shaft = 1;
    for(int i = 0; i < height; i ++){
        for(int j = 0; j < space; j ++){
            printf(" ");
        }
        space --;
        for(int k = 0; k < shaft; k ++){
            printf("#");
        }
        printf("  ");
        for(int k = 0; k < shaft; k ++){
            printf("#");
        }
        printf("\n");
        shaft ++;
    }

}