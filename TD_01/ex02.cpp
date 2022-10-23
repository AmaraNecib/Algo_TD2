#include <stdio.h>
int main(){
    int x,cpt = 0,sum = 0;
    double moy;
    printf("Enter a positive integer, negative to stop: ");
    scanf("%d", &x);
    while(x >= 0){
        cpt++;
        sum += x;
        printf("Enter a positive integer, negative to stop: ");
        scanf("%d", &x);
    }
    moy = (double)sum / (double) cpt;
    printf("The average is %f\n", moy);
    if(cpt == 0)
        printf("No positive integer entered\n");
    return 0;
}