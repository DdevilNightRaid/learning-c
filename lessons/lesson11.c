#include <stdio.h>

// Block functions

int sum(int a, int b)
{
    return a + b;
}

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i;
}

// Main Function
int main()
{
    int a, b, c, d;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is: %d", c);
    printstar(7);
    d = takenumber();
    printf("The number is: %d", d);

    return 0;
}