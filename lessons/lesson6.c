#include<stdio.h>
/*
    Types of if else statements:
    1) if Statement
        if (condtion1){
            code 1
        };
    2) if else Statement
        Syntax:
        if (condtion1){
            code 1
        } else {
            code 2
        };

    3) if else if ladder
        Suntax: 
        if (condtion1){
            code 1
        } else if (condtion 2) {
            code 2
        }
        else {
            code 3
        }
    4) Nested if
*/
int main(){
    int age;
    printf("Enger your age: ");
    scanf("%d", &age);
    if(age >= 80){
        printf("you shouldn't be driving.\n");
    }
    else if(age > 18 ){
        printf("You can drive a car\n");
    } else{
        printf("Please grow up first.\n");
    }
}