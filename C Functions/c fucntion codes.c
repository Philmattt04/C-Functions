//
//  c fucntion codes.c
//  C Functions
//
//  Created by Philippe Mathieu on 11/7/22.
//

#include <stdio.h>


int main()
{
    double bonusPoints[70];
    int i;
    int count = 70;
    for (i = 0; i < count; i++)
    {
        bonusPoints[i] = 3.0;
    }
    return 0;
}



int main()
{
    int i;
    int count = 0;
    int input;
    double pointList[70];
    printf("How many doubles do you want to enter (up to 70): ");
    scanf("%d", &count);
    while (count > 70 || count < 1)
    {
        printf("How many doubles do you want to enter (up to 70): ");
        scanf("%d", &count);
    }
    for (i = 0; i < count; i++)
    {
        printf("Enter a double: ");
        scanf("%d", &input);
        pointList[i] = input;
    }
    for (i = 0; i < count; i++)
    {
        printf("%.2f\n", pointList[i]);
    }
    return 0;
}

