// Importing libraries
#include<stdio.h>

//GCD through Iterative method
int Iterative(int a, int b)
{
    int c;
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}

//GCD through recursive method
int Recurrsive(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(Recurrsive(b,a%b));
    }
}

int main()
{
    // Declaring int type variables
    int a,b,ierror;
    printf("Two positive numbers: \n");
    ierror=scanf("%d %d", &a, &b);
    if(ierror !=2)
    {
        printf("Please enter two numbers\n");
        return 1;
    }
    if(a<=0 || b<=0)
    {
        printf("These numbers are not positive!\n");
        return 1;
    }
    //Print the Output
    printf("Iterative GCD of %d and %d is %d\n",a,b,Iterative(a,b));
    printf("Recursive GCD of %d and %d is %d\n",a,b,Recurrsive(a,b));

    return 0;
}

