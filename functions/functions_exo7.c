#include <stdio.h>
#include <string.h>
int length(char word[])
 {  
    int l=0;

    l=strlen(word);
      printf("The length is :%d",l);
    return 0;
 } 
 int main(){
                 char word[20];
                printf("Enter a word :");
                scanf("%s",word);
                length(word);
return 0;
 }