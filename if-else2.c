//write a c program to checked given character vowel or Consonant

#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a character:");
    scanf("\n %c",&ch);
    if (ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u')
    {
        printf("\n %c is vowel",ch);
    }
    else{
        printf("\n %c is Consonant",ch);
    }
return 0;
}