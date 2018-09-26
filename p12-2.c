//C program to find length of a string using pointer

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i = 0;
    char *ptrString;
    char *cInput = (char *) malloc(100 * sizeof(char));
    
    if (!cInput)
    {
        printf("Error in mem allocation");
        return 1;
    }

    ptrString = cInput;
    printf("Input string: ");
    fgets(cInput, 100, stdin);

    while (*ptrString != '\0')
        {
            i++;
            ptrString++;
        }

    printf("\nLength of string: %d\n", i - 1);

    return 0;
}