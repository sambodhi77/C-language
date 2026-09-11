//Write a c program to accept the number from user and to checked wheather number is even ot odd

#include<stdio.h>
void main(){
    int num;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    if(num %2==0)
    {
       printf("\n %d is even",num);
       
    }
    else{
        printf("\n %d is odd",num);
    }
}