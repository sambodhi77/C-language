//fibonacci series

#include<stdio.h.>
void main(){
    int a=0,b=1,c,i=1;
    printf("%d,\t%d",a,b);
    while(i<=8)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        i++;
    }

}