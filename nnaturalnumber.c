#include<stdio.h>
void natural(int);
int main()
{
    int c;
    printf("enter a number : ");
    scanf("%d",&c);
    natural(c);
    return 0;

}
void natural(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d\n",i);
    }

}