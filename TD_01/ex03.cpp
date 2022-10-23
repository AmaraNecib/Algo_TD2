#include <stdio.h>
#define N 100
int main(){
    int x,count = 0,T[N];
    printf("Enter a positive integer, negative to stop: ");
    scanf("%d", &x);
    // if x is positive, we store it in T[count] and increment count
    // if x is negative, we stop
    while(x >= 0){
        T[count] = x;
        count++;
        printf("Enter a positive integer, negative to stop: ");
        scanf("%d", &x);
    }
    // printf the envirse of the array
    for(int i = count - 1 ; i >= 0; i--)
        printf("%d ", T[i]);
    printf("\n");
    return 0;
}