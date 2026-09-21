// number is palindrome or not

#include<stdio.h>
void main(){
    int num,reverse=0,rem,temp;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    temp=num;
    while(num=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;

    }
    if(reverse==temp)
    {
        printf("\n %d is palindrome number",temp);

    }
    else{
        printf("\n %d is not palindrome number",temp);
    }
}
