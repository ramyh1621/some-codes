#include <stdio.h>
int vabs(int a){ 
       a=a*-1;
       return a;}
int main(){
               int n,t[100],i;
               do {
               
               printf("Enter N<=10 :");
               scanf("%d",&n);}while(n>10||n<=0);
               for (i=1;i<=n;i++){
                 printf("Enter t[%d]:",i);
                 scanf("%d",&t[i]);
                }
                 int max = t[1];
                for (i=1;i<n;i++){    
                    if(max <=t[i+1]){
                     max = t[i+1]; }
                }
               for (i=1;i<=n;i++){
                  if (t[i]<0)
                   {t[i]=vabs(t[i]);}}
                int sum = 0;
                for (i=1;i<=n;i++){
                    sum = sum + t[i];
                }
                printf ("The sum = %d",sum-max);

return 0;}