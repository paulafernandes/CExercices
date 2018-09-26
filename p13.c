//C program to copy one string to another string using pointer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(void)
{
    char cInput[MAX_SIZE], cOutput[MAX_SIZE];

    printf("Input string: ");
    fgets(cInput, MAX_SIZE, stdin);

    char *ptrInput = cInput; 
    char *ptrOutput = cOutput;

    int iLength = strlen(cInput);
    char *ptrEnd = &cInput[iLength - 1];
    int iCount = 1;
    
    //while (*(ptrOutput++) = *(ptrInput++));
    while (ptrEnd >= ptrInput)
    {
        *ptrOutput++ = *ptrInput++;
        iCount++;
    }

    printf("First string = %s\n", cInput);
    printf("Second string = %s\n", cOutput);
    printf("Number of chars copied: %d\n", iCount);
    return 0;
}