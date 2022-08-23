#include<stdio.h>
int factorial(int);
int main()
{
    int c,s;
    printf("enter a number : ");
    scanf("%d",&c);
    s=factorial(c);
    printf("factorial of a no is %d",s);
    return 0;

}
int factorial(int a)
{
    int i,d=1;
    for(i=1;i<=a;i++)
    {
        d*=i;
        
        

    }
    return d;

}