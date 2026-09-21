#include<stdio.h>
void main(){
    int num;
    printf("\n Enter a number:");
    scanf("\n d%",&num);
    switch(num%2)
    {
        case 0:
        printf("\n %d is even",num);
        break;

        case 1:
        printf("\n %d is odd",num);
    }
}