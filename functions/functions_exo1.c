#include <stdio.h>
int max(int a,int b){
    if (a>b)
      return a;
    else 
      return b;
}
int main ()
 {
         int x ,y,z,max1,max2;
         printf("Enter X , Y and Z:");
         scanf("%d %d %d",&x,&y,&z);
         max1=max(x,y);
         max2=max(max1,z);
         printf("%d",max2);

return 0;
 }