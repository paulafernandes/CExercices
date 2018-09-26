//C program to search element in array using pointers

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arrInput[MAX_SIZE];
    int iToSearch = 0;
    int *ptrStart = arrInput;
    int *ptrEnd;
    int iSize;
    
    printf("Enter size of array: ");
    scanf("%d", &iSize);
    
    ptrEnd = &arrInput[iSize - 1];
    
    printf("Input %d array elements: ", iSize);
    while (ptrEnd >= ptrStart)
        scanf("%d", ptrStart++);
        
    // printf("\nArray before search: ");
    // ptrStart = arrInput;
    // while (ptrEnd >= ptrStart)
    //     printf("%d ", *(ptrStart++));
        
    printf("Input element to search: ");
    scanf("%d", &iToSearch);
    
    //perform the search
    ptrStart = arrInput;
    
    int index = 0;
    int iIsFound = 0;
    while (ptrEnd >= ptrStart && *ptrStart != iToSearch)
    {
        index++;
        ptrStart++;
    }
    
    if(ptrStart <= ptrEnd)
        printf("Found on position %d\n", index + 1);
    else
        printf("Number not found\n");

    return 0;
}

