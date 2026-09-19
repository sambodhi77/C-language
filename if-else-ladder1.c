//Write a c program to accept three subject marks from user and two calculate total and average if average is greater than 90 then grade a,if average greater 75 then grade b,and if avreage is greater than 40 grade c,avg below 40 then student fail

#include<stdio.h>
void main()
{
    int math,sci,chem,total;
    float avg;
    printf("\n Enter a Three Subject Marks:");
    scanf("\n %d%d%d",&math,&sci,&chem,&total);
    total = math+sci+chem;
    avg=total/3;
    printf("\n total marks = %d",total);
    printf("\n,avg= %f",avg);
    if(avg>90 && avg<=100)
    {
        printf("\n class A");

    }
    else if(avg>75 && avg<=90)
{
printf("\n class B");
}
else if (avg>60 && avg<=75)
{
    printf("\n class c");

}

    else if(avg>40 && avg<=60)
    {
        printf("\n class D");
    }
    else if (avg<40){
        printf("\n fail");

    }
    else{
        printf("\n invalid avg please checked...");
    }
}
