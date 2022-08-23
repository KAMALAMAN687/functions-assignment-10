#include<stdio.h>
int check(int);
int main()
{
    int c,s;
    printf("enter a number : ");
    scanf("%d",&c);
    s=check(c);
    if(s==1)
    printf("entered no. is even");
    else
    printf("enterd no. is odd");
    return 0;    

}
int check(int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
    

}