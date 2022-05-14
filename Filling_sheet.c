//Rono Brian Kimutai j40-8245-2021
//Bsc Mechanical Engineering




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int rows;
    int columns;
    char name[25];
    int salary;

    for (rows=1; rows<=1000; rows++){

        printf("\n");
        printf("emp#\t\t names\t\t salary\t\n");
        printf("\n");

        for (columns=1; columns<=1000; columns++){
            scanf("%d ",salary);
            fgets(name, 1000, stdin);  
            name[strlen(name)-1]='\0';
            
        }
    }
    return 0;
}


