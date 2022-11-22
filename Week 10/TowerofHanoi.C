// Importing required libraries
#include <stdio.h>
#include <stdlib.h>

// Tower of Hanoi Function
void hanoi(int n, int s, int d, int inter)
{
    // Base case when n = 1
    if(n==1)
    {
        printf("Move disc from %d to %d\n", s, d);
    }
    // When n not equal to 1, function is recursively called
    else
    {
        hanoi(n-1, s,inter, d);
        printf("The Disk is moved from %d to %d\n", s, d);
        hanoi(n-1, inter, d,s);
    }
}

int main()
{
    int h=0;
    printf("Please input the number of discs: ");
    scanf("%d", &h);
    printf("Solution for %d discs: \n",h);
    hanoi(h,1,3,2);
    return 0;
}