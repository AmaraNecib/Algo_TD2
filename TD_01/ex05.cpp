#include <stdio.h>
#define N 100
int main(){
    int T[N],r_min;
    for(int i = 0; i < N; i++){
        printf("Enter T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    r_min = 0; // اول عنصر هو اصغر عنصر
    // ابحث عن اصغر عنصر
    for(int i = 1; i < N; i++){
        if(T[i] < T[r_min])
            r_min = i; // ترتيب العنصر الاصغر
    }
    // طباعة العنصر الأصعر وترتيبه
    printf("T[%d] = %d", r_min, T[r_min]);
    return 0;
}