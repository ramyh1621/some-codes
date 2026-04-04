#include <stdio.h>
int fctrec(int n){
    if (n==0){return 0;}
    else {return n + fctrec(n-1);}}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d",fctrec(n));
return 0;}
