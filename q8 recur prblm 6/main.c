//fibonnaci series
/*
 0,1,1,2,3,5,8,13,21,........
 num(1)=0
 num(2)=1
 num(3)=0+1=num(1)+num(2)
 num(4)=1+1=num(2)+num(3)
 num(n)=num(n-2)+num(n-1);
 
 */
#include<stdio.h>
int num(int);
int main()
{
    int a,y;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        y=num(i);
        printf("%d ",y);
        
    }
 
}
int num(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else
    {
        return num(n-2)+num(n-1);
        
    }
}
