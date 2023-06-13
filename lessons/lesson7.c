#include<stdio.h>
/*
    loops in c:
    1) do while Loop
    2) while Loop
    3) for Loop
*/
int main(){
    // Do while Loop Implementation: 
    printf("do while Loop Implementation: \n");
    int i = 0;
    do {
        i = i + 1;
        printf("Index: %d\n", i);
    } while (i < 10);

    // While Loop Implementation: 
    printf("while Loop Implementation: \n");
    int i = 0;
    while (i < 10){
        printf("Index: %d\n", i);
        i = i + 1;
    }

    // Do while Loop Implementation: 
    printf("for Loop Implementation: \n");
    int i;
    for(i=0; i < 10, i = i + 1;){
        printf("Index: %d\n", i);
    }
    return 0;
}