#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter two number:");
    scanf("\n %d%d", &a,&b);
    printf("\n sum=%d",a+b);
    printf("\n sub=%d",a-b);
    printf("\n mul=%d",a*b);
    printf("\n div=%f", (float)a/b);
    printf("\n rem=%d", a/b);
    return 0;

}