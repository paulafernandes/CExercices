// C program to copy one array to another using pointers

#include <stdio.h>

#define MAX_SIZE 100

/* Function declaration to print array */
void printArray(int arr[], int size);

int main (void)
{
    int arrInput[MAX_SIZE], arrOutput[MAX_SIZE];
    int iSize, i;
    int *ptrInput = arrInput;
    int *ptrOutput = arrOutput;
    int *ptrEnd;

    printf("Enter size of array: ");
    scanf("%d", &iSize);
    
    printf("Enter elements in array: ");
    for (i = 0; i < iSize; i++)
    {
        scanf("%d", (ptrInput + i));
    }

    // Pointer to last address element of source_arr
    ptrEnd = &ptrInput[iSize - 1];
    
    
    /* Print source and destination array before copying */
    printf("\nSource array before copying: ");
    printArray(arrInput, iSize);

    printf("\nDestination array before copying: ");
    printArray(arrOutput, iSize);
    
    // while (ptrInput <= ptrEnd)
    // {
    //     *ptrOutput = *ptrInput;
    //     ptrInput++;
    //     ptrOutput++;
    // }  EQUALS 

    //NOTA uses ptrEnd to be able to compare two pointers
    while(ptrInput <= ptrEnd)
        *(ptrOutput++) = *(ptrInput++);
    
    
    /* Print source and destination array after copying */
    printf("\n\nSource array after copying: ");
    printArray(arrInput, iSize);

    printf("\nDestination array after copying: ");
    printArray(arrOutput, iSize);    

    return 0;
}

void printArray(int *arr, int size)
{
    //int *arr returns the value of the first element of the array
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}