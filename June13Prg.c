#include<stdio.h>

void main()
{
    int units, cost = 0;

    printf("Enter no. of units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        cost = units * 10;
    }
    else if (units <= 200)
    {
        cost = (100 * 10) + (units - 100)  * 15;
    }
    else if (units <= 300)
    {
        cost = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    else if (units > 300)
    {
        cost = (100 * 10) + (100 * 15) + (100 * 20) + (units - 300) * 25;
    }

    printf("Cost: %d", cost);
}
