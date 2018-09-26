//C program to compare two string without using string library functions

#include <stdio.h>

#define MAX_SIZE 100

int compare(char s1[], char s2[]);

int main(void)
{
    char cString1[MAX_SIZE];    
    char cString2[MAX_SIZE];

    printf("Enter first string: ");
    fgets(cString1, MAX_SIZE, stdin);
    
    printf("Enter second string: ");
    fgets(cString2, MAX_SIZE, stdin);
    
    int result = compare(cString1, cString2);
    
    if(result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if(result < 0)
    {
        printf("First string is lexicographically smaller than second.\n");
    }
    else
    {
        printf("First string is lexicographically greater than second.\n");
    }
    
    return 0;
}

int compare(char *s1, char *s2)
{
    while((*s1 && *s2) && (*s1 == *s2)) 
    {
        s1++; 
        s2++;
    }
    
    return *s1 - *s2;
}