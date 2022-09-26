#include<stdio.h>
void primefactor(int n);
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    primefactor(n);
    return 0;
}
void primefactor(int n)
{
    int p,i=2,a;
    while(n!=0)
    {
        p=n%i;
        
        if(p==0)
        {
            for(a=2;a<=i-1;a++)
            {
                if(i%a==0);

            }
            if(a==i)
            {
                printf("%d, ",i);
                
            }
        }
        else
        {
            i++;
            continue;
        }
        n=n/i;
    }
}