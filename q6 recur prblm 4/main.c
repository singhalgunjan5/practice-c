// program to add first n  even natural numbers using recursion.
// 2+4+6+8+10+..........+n
/* sum(1)=2
 sum(2)=2+4=4+sum(1)
 sum(3)=2+4+6=6+sum(2)
 sum(n)=2+4+6+....+n=(2*n+sum(n-1))
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
        return 2;
    }
    else{
        return 2*a+sum(a-1);
    }
}
