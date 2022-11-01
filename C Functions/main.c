//
//  main.c
//  C Functions
//
//  Created by Philippe Mathieu on 10/10/22.
//

#include <stdio.h>

void scoreReturn(double scores[], int scoreCount);

int main(int argc, const char * argv[]) {
    
}

void scoreReturn(double scores[], int scoreCount)
{
    double bonusVar;
    int i;
    FILE * inPtr;
    inPtr = fopen("/Users/philsterr/Desktop/GitHub/C Funtions/C Functions/C Functions/bonus.txt", "r");
    fscanf(inPtr, "%lf", &bonusVar);
    for(i=0; i<scoreCount-1; i++)
    {
        scoreCount = scores[scoreCount] + bonusVar;
    }
    for(i=0; i<scoreCount-1; i++)
    {
        fprintf(inPtr, "\n%d", scoreCount);
    }
    fclose(inPtr);
}
