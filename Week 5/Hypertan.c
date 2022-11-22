#include <stdio.h>
#include <math.h>

float type1(float x, float d)
{
    float tan=0; // Holds the approximate result
    float element, value;
    int n =0; // Sum 
    while(fabs(element)>=d)
    {
        value = 2*n+1;
        element=pow(x,value)/value;
        tan += element;
        n++;
    }
    return tan;
}

float type2(float x){
    return((log(1+x)-log(1-x))/2);
}

int main() {

    //Variable declaration
    float d, x;

    printf("Enter the precision : \n");
    scanf("%f",&d);

    int n=1000;
    float array1[n]; //Store the result of arctanh1 for each x
    float array2[n]; //Store the result of arctanh2 for each x

    x=-0.9;

    for (int j = 0; j<n && x<=0.9 ; j++,x=x+0.1 )
    {
        array1[j]=type1(x,d);
        array2[j]=type2(x);
        printf("The difference at x: %f between them the values is %.10f\n",x,fabs(array1[j]-array2[j]));
    }
    return 0;
}
