// sum of square of first n natural numbers using recursion
/*
 1^2+2^2+3^2+4^2+.....
 num(1)=1^2
 num(2)=1^2+2^2=2^2+num(1)
 num(3)=1^2+2^2+3^2=3^2+num(2)
 num(n)=n*n+num(n-1)
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
        return n*n+num(n-1);
    }
}
