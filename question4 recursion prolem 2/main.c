// print 50 natural numbers using recursion
#include<stdio.h>
void num(int);
int main()
{
    int n=1;

    num(n);
    
}
void num(int a)
{
    if(a<=50)
    {
        printf("%d\n",a);
        num(a+1);
    }
   
}
