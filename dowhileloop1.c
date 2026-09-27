//write c program to accept a no.from user and to print given number table by using do while loop

#include<stdio.h>
void main()
{
    int i=1,num;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    do
    {
        printf("\n %d",i*num);
        i++;
    } 
    while(i<=10);
    
}
