#include<stdio.h>
int arrangement(int, int);
int main()
{
    int n,r,s;
    printf("enter a number of items and enter items selected at a time: ");
    scanf("%d%d",&n,&r);
    s=arrangement(n,r);
    printf("no. of arrangement are : %d",s);
    return 0;

}
int arrangement(int a, int b)
{
    int c,d=1,e,f,g=1;
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
    return d/g;

}
