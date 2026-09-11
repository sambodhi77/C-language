#include<stdio.h>
void main(){
    int num;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    if(num>100){
        printf("\n %d is greater than 100",num);
    }
    else{
        printf("\n %d is not greater than 100",num);
    
    }
}