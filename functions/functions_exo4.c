# include <stdio.h>
int fact(int a){
    int f=1,i;
    for (i=1 ; i<= a ; i++)
      f =f *i;
return f;      
}
int puis (int a , int n){
    int p=1,i;
    for (i=1;i<=n;i++)
    p=p*a;
return p;
}
int main (){
       int i,x,n;
      float s=0;
       printf("Enter nbr X and N :");
       scanf("%d %d",&x,&n);
       for (i=1;i<=n;i++){
       s=s+(float)puis(x,i)/fact(i);
       }
       printf("the sum is : %f",s);
return 0;
}