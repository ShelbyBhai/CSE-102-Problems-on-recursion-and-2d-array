#include<stdio.h>
double power(double x, int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        if(n>0)
            return x*pow(x,n-1);
        else
            return 1/(x*pow(x,-n-1));

    }

    else
    {
        if(n>0)
            return pow(x,(n+1)/2)*pow(x,(n-1)/2);
        else
              return (1/(pow(x,(-n+1)/2)*pow(x,(-n-1)/2)));
       }
}
    int main()
    {
        double x;
        double p;
        int n;
        printf("Enter the base: ");
        scanf("%lf", &x);
        printf("Enter the power: ");
        scanf("%d", &n);
        p = power(x, n);
        printf("%lf to the power %d = %.4lf\n", x, n, p);

    }








