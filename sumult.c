#include <stdio.h>
void sumult(int a, int b, int *sum, int *prod)
{
    *sum=a+b;
    *prod=a*b;
}


int main()
{
    int a =4;
    int b=3;
    int sum=0;
    int prod=0;
    sumult(a,b,&sum,&prod);

    
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d*%d=%d\n",a,b,prod);
}