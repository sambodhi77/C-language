#include<stdio.h>
void main(){
    int a,b,c;
    printf("\n Enter a number:");
    scanf("\n %d%d", &a,&b);
    printf("\n before swap two number:\n a=%d \n b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swap two number:\n a=%d \n b=%d", a,b);
}
