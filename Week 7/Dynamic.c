#include <stdio.h>
#include <stdlib.h>

// Function for array allocation
int* allocate(int n)
{
    int *pointer;
    pointer=(int *) malloc((n)*sizeof(int));

    // Deal with any errors
    if(pointer==NULL) 
    {
        printf("Error\n");
    }
    return pointer;
}

// Function to fill with ones
void fillwithones(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        a[i]=1;
    }
}

// Print the array
void print(int *array, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, array[i]);
    }
}

// Free allocated space
void freepointer(int *a)
{
    free(a);
}

int main()
{
    int n, *a;
    printf("Size of Array : \n");
    scanf("%d", &n);
    a=allocate(n);
    fillwithones(a, n);
    print(a,n);
    freepointer(a);
    // allocating NULL value to array
    a=NULL;
    return 0;
}