//check weather number is Amstrong 

#include<stdio.h>
#include<math.h>
void main(){
    int num,rem,count = 0,temp,sum=0;
    printf("\n Enter a number:");
    scanf("\n %d",&num);
    temp=num;
    while(num>0)
    {
        num+num/10;
        count++;
    }
    num=temp;
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,count);
        num=num/10;
    }
    if(sum==temp)
    {
        printf("\n %d is armstrong number",temp);

    }
    else{
        printf("\n %d is armstrong number",temp);
    }
}