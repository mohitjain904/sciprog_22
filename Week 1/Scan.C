#include<stdio.h>

int main()
{
    int a , b , error;
    printf("Enter Inputs");
    error = scanf("%d %d", &a,&b); // Scanning the Variables
    if (error !=2) // Error Checking
    {
        printf("Wrong Input");
        return 1;
    }
    printf("%d %d", a,b); // Printing the variables
    return 0;
}