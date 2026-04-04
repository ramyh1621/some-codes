#include <stdio.h>
typedef struct {
    float re,img;
}complex;
complex sum(complex a,complex b){
    complex s ;
    s.re = a.re + b.re;
    s.img = a.img + b.img;
    return s;
}
complex  prod (complex a ,complex b){
    complex p;
    p.re = (a.re *b.re)-(a.img + b.img);
    p.img =(a.re * b.img)+(a.img * b.re);
    return p;
}
int main (){
    complex z1,z2,s,p;
    printf("Enter the z1:");
    scanf ("%f %f",&z1.re,&z1.img);
    printf("Enter the z2:");
    scanf("%f %f",&z2.re ,&z2.img);
    s= sum (z1,z2);
    p= prod(z1,z2);
    printf("The sum is %.2f %.2f",s.re,s.img);
    printf("The product %.2f %.2f",p.re,p.img);
return 0;}