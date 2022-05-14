#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char name[25];

    printf("What is your name\n");
    //scanf("%s",&name); we can say for two names
    fgets(name, 25, stdin);  
    name[strlen(name)-1]='\0';  // Reads white spaces and a new line character fix

    printf("How old are you? \n");
    scanf("%d",&age);

    printf("You are %d years old\n", age);
    printf("Your name is %s\n",name);
    
    return 0;
}