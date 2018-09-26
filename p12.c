//C program to find length of a string using pointer

#include <stdio.h>

#define MAX_SIZE 100

int main(void){
    
    //char arrString[MAX_SIZE];
    char cInput[MAX_SIZE];
    char *ptrString = cInput;
    int i = 0;

    printf("Input string: ");
    scanf("%100[^\r\n]", ptrString);

    while (*ptrString != '\0')
        {
            i++;
            ptrString++;
        }
        
    printf("\nLength of string: %d\n", i - 1);
    
    return 0;
}