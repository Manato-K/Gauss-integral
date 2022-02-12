/*Gauss-integral*/

#include <stdio.h>
#define _USE_MATH_DEFINES

#include <math.h>
float f(float x){
    return(sqrt(x)); }
int main(void)
{
    int i,n;
    float a=0.0,b=1.0,S=0.0,x;
    float t[3][4]={
    {-0.5773502692,0.5773502692,0.0,0.0},
    {-0.7745966692,0.0,0.7745966692,0.0},
    {-0.8611363116,-0.3399810436,
    0.3399810436,0.8611363116} };
    float A[3][4]={
        {1.0,1.0,0.0,0.0},
    {0.5555555555,0.8888888888,0.5555555555,0.0},
    {0.3478548451,0.6521451549,0.6521451549,0.3478548451} };
    printf("input degree:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x=((b-a)*t[n-2][i]+(a+b))/2.0;
        S+=A[n-2][i]*f(x);
    }
    S*=(b-a)/2.0;
    printf("degree:%d, S=%f\n",n,S);
}

/*
input degree:2
degree:2, S=0.746595

input degree:3
degree:3, S=0.746815

input degree:4
degree:4, S=0.746825

input degree:0
degree:0, S=0.000000
*/