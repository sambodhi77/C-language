//calculate given number sum of digit 

#include<stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num%10;
    {
        printf("\n sum of digit=%d",num);
    }

    }
}