//print reverse order

#include<stdio.h>
void main(){
    int num,rem;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    while(num>0)

    {
       rem=num%10;
       printf("%d",rem);
       num=num/10;
    }

}