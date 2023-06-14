#include <stdio.h>
/*
Break and Continue are used in loops.
Break: it breaks the loop and stops it.
Continue: it skips the current itteration of the loop.
*/
int main()
{
    int i, age;
    for (i = 0; i < 20; i++)
    {
        printf("Enter your age: \n");
        scanf("%d", &age);
        if (age > 10)
        {
            printf("Sorry please use number less than 10\n");
            printf("Bye\n");
            break; // this will break the loop
        };
        printf("Index: %d\n", i);
    }
    printf("You just entered into while loop.\n Cause your for loop got break.\n");
    while (i < 10)
    {
        printf("Enter your age: \n");
        scanf("%d", &age);
        if (age > 20)
        {
            printf("You age must be bellow 20.,!\n");
            continue; // this will skip the iteration
        };
        printf("Index: %d\n", i);
    }
}