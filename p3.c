// Program to swap two numbers using call by reference

#include <stdio.h>

//declaration of swap function
void swap(int *input1, int *input2);

int main(void)
{
    int iInput1, iInput2 = 0;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &iInput1, &iInput2);
    
    /* Print original values of num1 and num2 */
        printf("Before swapping in main \n");
        printf("Value of Input1 = %d, Value of Input2 = %d\n\n", iInput1, iInput2);
    
    /* Pass the addresses of num1 and num2 */
    swap(&iInput1, &iInput2);
    
    
    /* Print the swapped values of num1 and num2 */
    printf("After swapping in main \n");
        printf("Value of Input1 = %d, Value of Input2 = %d\n\n", iInput1, iInput2);
    
    return 0;
}

void swap(int *input1, int *input2)
{
    int iTemp = 0;
    iTemp = *input1;
    *input1 = *input2;
    *input2 = iTemp;
}