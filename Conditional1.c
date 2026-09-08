//Write a c program to accept a number from user And to check wheather number even or odd

#include<stdio.h>
void main()
{
    int num;
    printf("\n Enter a number:");
    scanf("\n %d", &num);
    num%2==0? printf("\n %d is even number",num):
    printf("\n %d is odd number",num);
}