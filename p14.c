//Program to concatenate two strings using pointer

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main(void)
{
    char cString1[MAX_SIZE], cString2[MAX_SIZE];
    char *ptrS1 = cString1;
    char *ptrS2 = cString2;
    
    printf("Enter first string: ");
    fgets(cString1, MAX_SIZE, stdin);
    
    printf("Enter second string: ");
    fgets(cString2, MAX_SIZE, stdin);
    
    int iSizeS1 = strlen(cString1);
    int iSizeTotal = iSizeS1 + strlen(cString2);
    
    /* Move till the end of str1 */
    int i, j = 0;
    for (i = iSizeS1 - 1; i < iSizeTotal - 1; i++){
        ptrS1[i] = ptrS2[j];
        j++;
    }
    
    printf("Concatenated string: %s", cString1);
    
    return 0;
}