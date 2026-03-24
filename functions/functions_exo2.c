#include <stdio.h>
#include <stdbool.h>
bool devide(int x , int y){
    int div;
    div = x%y;
    if (div == 0 )
     return true;
    else 
     return false;
    
}
int main(){
         int a,b,n,i;
         do {
         printf("Enter nbr of elements n<=10 : ");

         scanf("%d",&n);}
         while(n>10 || n<=0);
         printf("Enter an integer a :");
         scanf("%d",&a);

         int t[100];
         for (i=1;i<=n;i++){
          printf("Enter %d elements :",n);
          scanf("%d",&t[i]);}
         for (i=0;i<=n;i++){
            
            if (devide(t[i],a)==true)
              printf("%d\n",t[i]);
            
            
         }

return 0;
}