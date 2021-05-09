// to calculate sum of numbers from 1 to n using recursion
#include<stdio.h>
int  sumoffirst(int);
int main()
{
    int n,y;
    scanf("%d",&n);
    y=sumoffirst(n);
    printf("%d",y);
}
int sumoffirst(int a)
{
    if(a==1){
        return 1;
    }
    else
    {
        return a+sumoffirst(a-1);
    }
}
