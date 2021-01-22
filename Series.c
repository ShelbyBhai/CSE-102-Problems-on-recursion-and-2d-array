#include<stdio.h>

int series(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 3;
    else return series(n-1)*series(n-2);
}

int main()
{
    int n;
    printf("enter the value of n in the series: ");
    scanf("%d",&n);
    printf("%d",series(n));
    return 0;
}

