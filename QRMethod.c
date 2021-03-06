//=======================================================================
// Author:		Theodore Brucker
// Date:  		3/2/2021
// Language:	C
// Example:		Quotient remainder method for converting base ten to any base between 1-16
// File:   		QRMethod.c
//=======================================================================

#include <stdio.h>

int main()
{
    char base_digits[16] = { 
        '0', '1', '2',
        '3', '4', '5', 
        '6', '7', '8', 
        '9', 'A', 'B', 
        'C', 'D', 'E', 'F'};

    while(1)
    {
        //Variables
        int quotient, base;
        char result[64];
        int index=0;

        //Requesting and storing base ten number then quitting if = -1
        printf("Enter a non-negative base ten integer: ");
        scanf("%d", &quotient);
        if(quotient == -1) break;

        //Requesting and storing base to convert into
        printf("Enter a base to convert to: ");
        scanf("%d", &base);

        //Convert to requested base using quotient-remainder method
        while(quotient != 0)
        {
            //Prints each remainder while reducing quotient until = 0
            result[index] = quotient%base;
            quotient = quotient/base;
            index++;
        }
        index--;

        while(index>=0){
            printf("%c",base_digits[result[index]]);
            index--;
        }
    printf("\n");
    }
}