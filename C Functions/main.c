//
//  main.c
//  C Functions
//
//  Created by Philippe Mathieu on 10/10/22.
//

#include <stdio.h>

void scoreReturn(double scores[], int scoreCount);

int main()
{
    int scoreCount = 5;
    double scores[5];
    scores[0]=50.00;
    scores[1]=60.00;
    scores[2]=40.00;
    scores[3]=20.00;
    scores[4]=10.00;
    scoreReturn(scores, scoreCount);
}

void scoreReturn(double scores[], int scoreCount)
{
    double bonusVar;
    int i;
    FILE * inPtr;
    inPtr = fopen("/Users/philsterr/Desktop/GitHub/C Funtions/C Functions/C Functions/bonus.txt", "r");
    fscanf(inPtr, "%lf", &bonusVar);
    for(i=0; i< scoreCount; i++)
    {
        scores[i] = scores[i] + bonusVar;
        printf("%lf\n", scores[i]);
    }
    fclose(inPtr);
}
