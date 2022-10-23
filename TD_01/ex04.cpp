#include <stdio.h>
#define N 100
int main(){
    int A[N], B[N],i;
    for(i = 0; i < N; i++){
        printf("Enter A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < N; i++){
        printf("Enter B[%d] = ", i);
        scanf("%d", &B[i]);
    }
    for(i = 0; i < N; i++){
        if(A[i] == B[i])
            printf("%d\n", i);
    }
    return 0;
}