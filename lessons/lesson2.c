#include<stdio.h>
int main()
{
    // initializing the 'int' variables 'a' and 'b'
    int a, b;
    printf("Enter value for a:\n");
    // '&a' -> address of a where the value of a will be stored
    scanf("%d", &a);
    printf("Enter value for b:\n");
    scanf("%d", &b);

    printf("The sum is: %d\n", a + b);
    return 0;
}
