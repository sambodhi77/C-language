//write a c programming to print 1 to 10 table

#include<stdio.h>

void main()
{
    int i=1,j;

    while(i<=10)
    {
        j=1;

        while(j<=10)
        {
            printf("\t%d", i*j);
            j++;
        }

        printf("\n");
        i++;
    }
}