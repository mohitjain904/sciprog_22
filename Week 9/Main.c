#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

int get_num_lines(char filename[MAX_FILE_NAME])
{ 
    FILE *fp;
    fp = fopen(filename,"r"); // Open the file

    int ch_read;
    int count = 0;

    while((ch_read = fgetc(fp)) != EOF) // EOF when we are done reading the file
    {
        if(ch_read == '\n')
        { 
            count++;
        }
    }

    fclose(fp); 
    return count;
}

int main()
{
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name : "); 
    scanf("%s",filename);

    
    int n = get_num_lines(filename) + 1 ;

    f = fopen(filename,"r");

    int i;
 
    int* arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = (int*)malloc(n * sizeof(int));
    }
    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(f,"%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int flag = isMagicSquare(arr,n);
    if(flag==1)
    {
        printf("Its a Magic Square\n");
    }
    else
    {
        printf("Its not a Magic Square\n");
    }
    for (i=0;i<n;i++)
    {
        free(arr[i]);
    }
    fclose(f);
    return 0;
}