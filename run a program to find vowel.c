#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    switch(ch)
     {
        case'a':case'A':
        printf("Vowel:A\n");
        break;
        case'e':case'E':
        printf("Vowel:E\n");
        break;
        case'i':case'I':
        printf("Vowel:I\n");
        break;
        case'O':case'O':
        printf("Vowel:O\n");
        break;
        case'u':case'U':
        printf("Vowel:U\n");
        break;
        default:
          printf("Not a Vowel\n");

     }












