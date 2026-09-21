#include<stdio.h>
void main(){
    char ch;
    printf("\n Enter a character:");
    scanf("\n %c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\n %c is vowel",ch);
        break;

        Default:
        printf("\n %c is consonant",ch);
        
    }
}