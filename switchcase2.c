// Calculate Arithmetic Operation given two numbers by using switch case

#include<stdio.h>

void main()
{
    int a,b,ch;

    printf("\n 1. add");
    printf("\n 2. sub");
    printf("\n 3. mul");
    printf("\n 4. div");

    printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("\n Enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\n sum = %d",a+b);
            break;

        case 2:
            printf("\n sub = %d",a-b);
            break;

        case 3:
            printf("\n mul = %d",a*b);
            break;

        case 4:
            printf("\n div = %d",a/b);
            break;

        default:
            printf("\n Your choice is invalid. Please check..");
    }
}