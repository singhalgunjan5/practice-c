// sum of cube of first n natural numbers using recursion
/*
 1^3+2^3+3^3+4^3+.....
 num(1)=1^3
 num(2)=1^3+2^3=2^3+num(1)
 num(3)=1^3+2^3+3^3=3^3+num(2)
 num(n)=n*n*n+num(n-1)
 */
#include<stdio.h>
int num(int);
int main()
{
    int a,y;
    scanf("%d",&a);
    y=num(a);
    printf("%d",y);
}
int num(int n){
    if(n==1){
        return 1;
    }
    else
    {
        return n*n*n+num(n-1);
    }
}
