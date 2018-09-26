//C program to swap two arrays using pointers

#include <stdio.h>

#define MAX_SIZE 100

//Function definition
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void swapArray(int arr1[], int arr2[], int size);

int main(void)
{
    int arrInput[MAX_SIZE], arrOutput[MAX_SIZE];
    int *ptrInput = arrInput;
    int *ptrOutput = arrOutput;
    int *ptrInputEnd, *ptrOutputEnd;
    int i, iSize = 0;
   
    printf("Enter size of array: ");
    scanf("%d", &iSize);
    
    // Input elements of destination array
    printf("Enter %d elements in source array: ", iSize);
    inputArray(ptrInput, iSize);

    // Input element of destination array
    printf("Enter %d elements in destination array: ", iSize);
    inputArray(ptrOutput, iSize);
    
    //print both arrays before swap
    printf("\n\nSource array before swapping: ");
    printArray(ptrInput, iSize);
    
    printf("\nDestination array before swapping: ");
    printArray(ptrOutput, iSize);
    
    swapArray(ptrInput, ptrOutput, iSize);

    //print both arrays after swap
    printf("\n\nSource array after swapping: ");
    printArray(ptrInput, iSize);
    
    printf("\nDestination array after swapping: \n");
    printArray(ptrOutput, iSize);    
}

//Function used to read input from user in an array.
//@arr     Pointer to array to store input
//@size    Size of the array
void inputArray(int *arr, int size)
{
    //NOTE the input int *arr returns the value of the pointer to the first element of the array
    //pointer to the last element of the array
    int *ptrArrayEnd = &arr[size - 1];
    
    while (ptrArrayEnd >= arr)
        scanf("%d", arr++);
}

//function used to print the array

//Function used to read input from user in an array.
//@arr     Pointer to array to store input
//@size    Size of the array
void printArray(int *arr, int size)
{
    //pointer to the address of the last element of the array
    int *ptrEnd = &arr[size - 1];
    
    while (ptrEnd >= arr)
        printf("%d ", *(arr++));
}

void swapArray(int *arr1, int *arr2, int size)
{
    //pointer to last element of arr1
    int *ptrArr1End = &arr1[size - 1];
    //pointer to last element of arr2
    int *ptrArr2End = &arr2[size - 1];

    while (ptrArr1End >= arr1 && ptrArr2End >= arr2)
    {
        *arr1  ^= *arr2;
        *arr2    ^= *arr1;
        *arr1  ^= *arr2;
        
        arr1++;
        arr2++;
    }
}