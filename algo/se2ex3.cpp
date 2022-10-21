#include <stdio.h>
int Palindome(char s[],int start,int end){
    while(start < end && s[start] == s[end]){
        start++;
        end--;
    }
    if(start >= end)
        return 1;
    else
        return 0;
}
int PalindomeRec(char s[],int start,int end){
    if(start >= end)
        return 1;
    else if(s[start] == s[end])
        return PalindomeRec(s,start+1,end-1);
    else
        return 0;
}
int main(){
    char s[100];
    int i;
    printf("Enter a string: ");
    scanf("%s",s);
    for(i = 0; s[i] != '\0'; i++);
    if(Palindome(s,0,i-1))
        printf("Palindome\n");
    else
        printf("Not Palindome\n");
    // Recursive
    if(PalindomeRec(s,0,i-1))
        printf("Palindome /*Recursive*/\n");
    else
        printf("Not Palindome /*Recursive*/\n");
    return 0;
}