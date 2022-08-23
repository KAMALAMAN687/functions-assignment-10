#include<stdio.h>
int combination(int, int);
int main()
{
    int n,r,s;
    printf("enter a number of items and enter items selected at a time: ");
    scanf("%d%d",&n,&r);
    s=combination(n,r);
    printf("no. of combinations are : %d",s);
    return 0;

}
int combination(int a, int b)
{
    int c,d=1,e,f,g=1,h=1,i;
    //calculate factorial of n
    for(c=1;c<=a;c++)
    {
        d*=c;

    }

    e=a-b;
    for(f=1;f<=e;f++)
    {
        g*=f;

    }
    for(i=1;i<=b;i++)
    {
        h*=b;
    }   
    return d/g*h;

}
