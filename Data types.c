#include <stdio.h>
int main()
{
    
    char letter='a'; //single quotes for one character %d
    char name="Brian"; // double quotes for array of characters %s
    char number= 125; // (-128-127 only)Can be displayed as either %d or %s tales from ASCII
    unsigned char xx= 200; //(for 0 -255) to double %d or %c
    float decimal= 3.44; // 6-7 digits 4bytes of memory(32bits of precision) %f
    double long_decimal= 1.28373634637;// double the precision of float(64bit) %lf
    bool done= true; // 1 for true and 0 for false(only one bit)  %d
    short int small_interger= 30000; //(-32768-32767) %d (2bytes)
    unsigned short Small_positive_interger=40000; //(0-65535) %d (2bytes)
    int interger=23394894; // (-2b-+2b) 4bytes %d
    unsigned int positive_interger= 3345; // Use %u also 4bytes alafu 0-4b
    long long int very_big_interger=123243445453235; // Use 8bytes %lld
    unsigned long long int very_big_positive_interger=178236e234523: // %llu


    return 0;
}