//Rono Brian Kimutai j40-8245-2021
//Bsc Mechanical Engineering




#include<stdio.h>

int main(void)
{
    int numbers[5] = {1,2,3,4,5};
    int vertical;
    int horizontal;

    for(vertical = 0; vertical <=5; vertical++) {
        if(vertical == 0) {
            printf("x");
            printf(" ");
            for(horizontal = 0; horizontal< (sizeof(numbers) / sizeof(numbers[0])); horizontal++) {
                printf("%d", numbers[horizontal]);
                printf(" ");
            }
        }
        for(horizontal = 0; horizontal< (sizeof(numbers) / sizeof(numbers[0])); horizontal++) {
            printf("%d", numbers[horizontal]*vertical);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

