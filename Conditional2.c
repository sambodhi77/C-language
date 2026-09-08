//write a c program to accept number from user and to check wheather number  character is vowel character match

#include<stdio.h>
void main()
{
    char ch;
    printf("\n Enter a number:");
    scanf("/n %d",&ch);
    (ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')?
        printf("\n %c is vowel",ch):
        printf("\n %c is Consonant",ch);

} 
