
// program to add first n  odd natural numbers using recursion.
// 1+3+5+7+9+11+..........+
/* sum(1)=1
 sum(2)=1+3=3+sum(1)
 sum(3)=1+3+5=5+sum(2)
 sum(n)=1+3+5+7+9+11+.....=(2*n-1)+sum(n-1))
 */

#include<stdio.h>
int sum(int);
int main()
{
    int n,y;
    scanf("%d",&n);
    y=sum(n);
    printf("%d",y);
    
}
int sum(int a)
{
    if(a==1)
    {
        return 1;
    }
    else{
        return (2*a-1)+sum(a-1) ;
    }
}
