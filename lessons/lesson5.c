#include<stdio.h>
#define Ope 7
/*  
    Format specifier is a way to tell the compilier
    what type of data is in the variable.
    Example: 
        %d -> Integer,
        %c -> Character,
        %f -> Float,
        %l -> long,
        %lf -> double,
        %Lf -> long double

    Constants:
    Declare constant in two ways:
        const num = 7;
        #define Ope 7
*/
int main(){
    int a = 5;
    float b = 7.33;
    const int num = 7;
    printf("Int a= %d and float b = %f\n", a, b);
    printf("Num = %d", num);
    printf("#define Ope = %d", Ope);
    return 0;
}