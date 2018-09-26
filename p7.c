//C program to reverse an array using pointers

#include <stdio.h>

#define MAX_SIZE 100

//void reverseArray(int arr[], int size);
void printArr(int arr[], int size);

int main(void)
{
    int arrInput[MAX_SIZE]; //array to store input array
    
    int *ptrLeft = arrInput;
    int *ptrRight;
    int iSize;
    
    printf("Enter size of array: ");
    scanf("%d", &iSize);
    
    //pointer to the last element of input array, right size
    ptrRight = &arrInput[iSize - 1];
    
    printf("Enter elements in array: ");
    while (ptrRight >= ptrLeft)
        scanf("%d", ptrLeft++);
        
    printf("\nArray before reverse: ");
    printArr(arrInput, iSize);
    
    ptrLeft = arrInput;
    //reverseArray(arrInput, iSize);
    while (ptrRight > ptrLeft)
    {
        *ptrLeft    ^= *ptrRight;
        *ptrRight   ^= *ptrLeft;
        *ptrLeft    ^= *ptrRight;
        
        ptrLeft++;
        ptrRight--;
    }
    
    printf("\nArray after reverse: ");
    printArr(arrInput, iSize);
    
    return 0;

}

void printArr(int *arr, int size)
{
    int *ptrEnd = &arr[size - 1];
    
    while (ptrEnd >= arr)
        printf("%d ", *(arr++));
}

// void reverseArray(int *arr, int size)
// {
//     //points to the beginning of array
//     int *ptrLeftFirst = arr;
    
//     //points to the end of array
//     int *ptrRightEnd = &arr[size - 1];
    
//     while (ptrRightEnd > ptrLeftFirst)
//     {
//         *ptrLeftFirst    ^= *ptrRightEnd;
//         *ptrRightEnd   ^= *ptrLeftFirst;
//         *ptrLeftFirst    ^= *ptrRightEnd;
        
//         ptrLeftFirst++;
//         ptrRightEnd++;
//     }
// }