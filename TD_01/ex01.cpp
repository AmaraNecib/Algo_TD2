#include <stdio.h>
#include <math.h>
int main(){
    double a,b,A,G;
    printf("Donne a et b: ");
    scanf("%lf %lf",&a,&b);
    A = (a+b) / 2.0;
    G = sqrt(a * b);
    printf("A - G = %f\n",A-G);
    return 0;
}