#include <stdio.h>
#include <math.h>

//the header file math.h is used for math functions

int main()
{
    double A = sqrt(9);    //Square root of 9
    double B = pow(2,4);   // two raised to power four
    int C = round(3.14);   //normal rounding off
    int D = ceil(3.14);    //up
    int E = floor(3.99);   //down
    double F = fabs(-100); //absolute value
    double G = log (3);
    double H = sin(45)  ;
    double I = cos (45);
    double J = tan (45);

    printf("\n%lf",A);
    printf("\n%lf",B);
    printf("\n%d",C);
    printf("\n%d",D);
    printf("\n%d",E);
    printf("\n%lf",F);
    printf("\n%lf",G);
    printf("\n%lf",H);
    printf("\n%lf",I);
    printf("\n%lf",J);


    return 0;

}