//Write a c program to accept three number from user to find out largest number from given three number

#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter Three number:");
scanf("\n %d%d%d",&a,&b,&c);
if(a>b && a>c)
{
 printf("\n %d is greater than %d and %d",a,b,c); 
}

else if(b>a && b>c)
{
    printf("\n %d is greater than %d and %d",b,a,c);
}
else if(c>a && c>b)
{
printf("\n %d is greater than %d and %d",c,a,b);
}
else
{
    printf("\n all number are equal.....");
}
}