//Conditional Operator in C 


#include<stdio.h>
void main(){
    int num;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    num>100?printf("\n %d is greater than 100",num):
    printf("\n %d is not greater than 100",num );
}