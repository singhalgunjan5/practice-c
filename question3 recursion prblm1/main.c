// problem to calculate factorial using recursion.
//by this we are able to calculate upto factorial of 65.
#include<stdio.h>
long long int call(long long int);
int main()
{
   long long int n,y;
    printf("enter the number for factorial");
    scanf("%llu",&n);
    y=call(n);
    printf("%llu",y);
}
long long int call(long long int a)
{
    if(a==1)
    {
        return(1);
    }
    else{
        return(a*call(a-1));
    }
}
