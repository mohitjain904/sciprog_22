
/* Importing libraries */ 

#include <stdio.h>
#include <math.h>

/* Global Variable */
float array[12];

/* Functions */
float conversion(int value){
    return (M_PI * value)/180.0;
}

/* Function to calculate Integral using trapezoidal rule */

float Trapezodial(int n){
    float integral;
    int i;
    integral=array[0]+array[n];
    /* Calculate the integral at points x1,..,x11 and add them */
    for ( i = 1; i < n; i++)
    {
        integral = integral + 2*array[i];
    }
    /* Multiply integral by (b-a)/(2N), (pi/3)/(2*12) */
    integral= integral * conversion(60.0-0.0)/(2*n);
    return integral;
}

int main()
{
    int n=12, i;
    float integral,d;
    /* Calculate the value for tan() for every 5 degrees */
    for (i = 0; i <= n; i++)
    {
        d = i * 5.0;
        array[i]=tan(conversion(d));
        printf("For degree %d = %f\n",i,array[i]);
    }
    integral = Trapezodial(n);
    printf("\nTrapezoidal: %f\nExact : %f\n",integral,log(2.0));
    return(0);
}

