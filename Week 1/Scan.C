#include<stdio.h>

int main()
{
    int a , b , error;
    printf("Enter Inputs");
    error = scanf("%d %d", &a,&b);
    if (error !=2)
    {
        printf("Wrong Input");
        return 1;
    }
    printf("%d %d", a,b);
    return 0;
}