#include <stdio.h>
int multiple2(int a){
   if (a%2==0)
    return 1;
else 
   return 0;}
int multiple3(int a){
   if (a%3==0)
    return 1;
else 
   return 0;}   
int main(){
      int n,mult2,mult3;
      printf("Enter the nbr :");
      scanf("%d",&n);
      mult2=multiple2(n);
      mult3=multiple3(n);
      if (mult2==1){
        printf("even");
}
      if (mult3==1){
         printf("\nit's multiple of 3");

      }
       if (mult2==1 && mult3 ==1 ){
         printf("\nit's divisible by 6");
       }
return 0;
}