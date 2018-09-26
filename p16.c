//Program to find reverse of a string using pointers

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    char cInput[MAX_SIZE], cReverse[MAX_SIZE];
    char *ptrInput = cInput;
    char *ptrEndInput = cReverse;
    int iLenght = 0;
    
    printf("Enter the string: ");
    fgets(cInput, MAX_SIZE, stdin);
    
    //Find the lenght of String
    while (*(ptrInput++)) 
        iLenght++;

    //ignore last records
    ptrInput = ptrInput - 3;
    //ptrInput--;
    iLenght--;
    int i = 0;
    int j = iLenght;
    for (i = 0; i < iLenght; i++)
    {
        //at this point ptrInput points to the end of array, ptrEndInput to the beginning of destination array
        *ptrEndInput = *ptrInput;
        ptrEndInput++;
        ptrInput--;
    }
    ptrEndInput = '\0';

    printf("\nOriginal string = %s\n", cInput);
    printf("Reverse string = %s\n", cReverse);
    
    return 0;
}