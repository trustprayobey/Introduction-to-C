#include <stdio.h>
int main()
{
    //Just declaration and initialization

    int x;
    x=123;
    int y=123;
    int age=18;


    float gpa = 2.44; //For decimal

    char grade ='C';  //For single character
    char name[]="bro" ;   //For string


    printf("You are %d years old\n",age);
    printf("Hey %s\n",name);
    printf("Your grade is %c \n",grade);
    printf("You have a gpa of %f \n",gpa);

    
    return 0;
}