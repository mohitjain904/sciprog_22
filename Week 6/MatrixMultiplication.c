#include<stdio.h>

int main()
{
    //Initializing variables
    int n=3, p=3, q=3;
    double A[n][p], B[p][q], C[n][q];

    //Initialise A, B and C matrices 

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<p; j++)
            {
                A[i][j]=i+j; //Matrix A initialized to i+j
            }
        } 
    
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            B[i][j]=i-j;  //Matrix B initialized to i-j
        }
    }
    
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<q; j++)
        {
            C[i][j]=0.0;  // Matrix C initialized to zero
        }
    }
    
    //Matrix multiplication
    
    for (int i=0; i<n; i++)
    { 
    	for(int j=0; j<q; j++)
	    { 
    		for (int k=0; k<p; k++)
    		{ 
    	        C[i][j]=C[i][j]+A[i][k]*B[k][j]; //Matrix Multiplication
            }
        }
    }

    //Printing Matrices
    printf("\nMatrix A:\n"); 
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    } 
    
    printf("\nMatrix B:\n"); 
    for (int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%3.0f ", B[i][j]);
        } 
        printf("\n");
    }
    
    printf("\nMatrix C:\n"); 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<q; j++) 
        {
            printf("%3.0f ",C[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}