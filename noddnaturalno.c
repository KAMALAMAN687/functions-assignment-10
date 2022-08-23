#include<stdio.h>
void odd(int);
int main()
{
    int c;
    printf("enter a number : ");
    scanf("%d",&c);
    odd(c);
    return 0;

}
void odd(int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        printf("%d\n",2*i+1);

    }

}