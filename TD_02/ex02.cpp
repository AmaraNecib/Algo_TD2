#include <stdio.h>
int sommecarre(int n){
    int i,sum = 0;
    for(i = 1; i <= n; i++)
        sum += i*i;
    return sum;
}
int sommecarreRec(int n){
    if(n == 1)
        return 1;
    else
        return n*n + sommecarreRec(n-1);
}
int main(){
    printf("The sum of the first 10 squares is %d ussing sommecarre\n", sommecarre(10));
    printf("The sum of the first 10 squares is %d ussing sommecarreRec\n", sommecarreRec(10));
    return 0;
}