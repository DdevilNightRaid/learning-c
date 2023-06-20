#include <stdio.h>
/*
km to miles
inches to foot
pound to kg
inches to meters
*/
int main()
{
    float kmToMiles = 0.621371;
    float poundToKg = 0.453592;
    float inchToFoot = 0.0833333;
    float inchToMeter = 0.0254;
    char input;
    float first;
    while (1)
    {
        printf("Enter the input char: q to quit:\n");
        printf("[ k ] KM to Miles\n");
        printf("[ p ] Pound to Kilogram\n");
        printf("[ i ] Inch to Foot\n");
        printf("[ m ] Inch to Meter\n");
        printf("> ");
        scanf(" %c", &input);

        if (input == 'q')
        {
            break;
        }
        else if (input == 'k')
        {
            printf("Enter quantity in terms of KM:\n > ");
            scanf("%f", &first);
            printf("%.2f K.M = %.2f Miles.\n", first, first * kmToMiles);
            continue;
        }
        else if (input == 'p')
        {
            printf("Enter quantity in terms of pounds:\n > ");
            scanf("%f", &first);
            printf("%.2f pound = %.2f kg.\n", first, first * poundToKg);
            continue;
        }
        else if (input == 'i')
        {
            printf("Enter quantity in terms of inch:\n > ");
            scanf("%f", &first);
            printf("%.2f inch = %.2f foot.\n", first, first * inchToFoot);
            continue;
        }
        else if (input == 'm')
        {
            printf("Enter quantity in terms of inch:\n > ");
            scanf("%f", &first);
            printf("%.2f inch = %.2f meter.\n", first, first * inchToMeter);
            continue;
        }
        else
        {
            printf("Please enter a valid character!\n");
            continue;
        }
    }

    return 0;

}