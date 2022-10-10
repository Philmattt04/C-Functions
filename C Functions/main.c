//
//  main.c
//  C Functions
//
//  Created by Philippe Mathieu on 10/10/22.
//

#include <stdio.h>

/** Write the function prototype for a function called AverageAge.  The function takes 3 arguments of type integer and returns a double, the average of the 3 arguments.  

 */
//double AverageAge(int, int, int);


/*
Write the function definition for a function called LetterGrade that takes two double arguments grade1 and grade2 and returns a character. If the average of the 2 grades is 90.0 or above, the function will return a capital ‘E’. If the average is between 70.0 and 90.0 the function will return a capital ‘S’, if the average is 70.0 or below the function will return a capital ‘U’.

 
 char LetterGrade(double , double);

char LetterGrade(double grade1, double grade2)
        {
            double  average;
            char result = 0;
            average = (grade1 + grade2) / 2;
            if(average >= 90.0)
        {
            result =  'E';
        }
            if(average > 70.0 && average < 90.0)
        {
            result = 'S';
        }
            if(average <= 70.0)
        {
            result =  'U';
        }
    return result;
        }


int main(int argc, const char * argv[]) {
    // insert code here...
    LetterGrade(80, 60);
    printf("%c\n", LetterGrade(80, 60));
    return 0;
    
}
*/


/*
 ` Write the definition for a function called Larger that has 3 parameters (takes 3 arguments). The function should return the largest of the 3 values. You should not assume the variables will contain different values.
 */

int Larger(int value1, int value2, int value3);

int Larger(int value1, int value2, int value3)

    {
    int x;
        x = value1;
            
            if(x <= value2)
    {
            x = value2;
    }
            if(x <= value3)
    {
            x = value3;
    }
            return x;
    }

int main(int argc, const char * argv[]) {
    int LargerInMain;
    LargerInMain = Larger(13, 4, 7);
    printf("%d\n", LargerInMain);
    return 0;
}
