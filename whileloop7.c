// Write a c program to accept 1 to 10 no.from user and two calculate all number sum and show

#include<stdio.h>
void main(){
    int num,i=1,sum=0;
     while(i<=10)
     {
    printf("\n Enter a number:");
    scanf("\n &d",&num);
    sum=sum+num;
    i++;
     }

    printf("\n sum=%d",sum); 
}