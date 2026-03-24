#include <stdio.h>
#include <string.h>


char palindrome(char word[])
{
        int i,l,j;
        char pali[20];
        l = strlen(word);
        for(i=0;i<l;i++){
                pali[i]=word[l-1-i];
        }
        pali[l] = '\0';
        if (strcmp(pali, word) == 0)
                printf("the word is a palindrome");
        else
                printf("the word is not a palindrome");
        return 0;
}
int main()
{
        int i,l,j;
        char word[20];
        char pali[20];
        printf("Enter a word :");
        scanf("%s",word);
        palindrome(word);

        return 0;
}