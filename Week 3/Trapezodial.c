#include <stdio.h>
#include <math.h>

int main(){

  //declare variables
  int N=12, i;
  float a=0.0;
  float b, integral;

  //set b=pi/3 rads
  b=(M_PI*60.0)/180.0;
  printf("b=%f rads\n", b);

  //first part of sum
  integral=tan(a)+tan(b);
  
  //For loop
  for(i=5; i<60; i+=5){
    integral+=2*tan((M_PI*i/180.0));
  }
  
  //multiply by the prefactor
  integral = ((b-a)/(2*N))*integral;
  

  printf("Approximate area =%f, Exact area =%f\n", integral, log(2.0));


  return 0;
}