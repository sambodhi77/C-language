//factorial

#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    while(num>0)
    {
        fact=fact*num;
        num--;

    }
    printf("\n factorial=%d",fact);

}
