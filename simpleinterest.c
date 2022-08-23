#include<stdio.h>
float interest(float ,float ,float );
int main()
{
    float principal,rate,time,si;
    printf("enter principal , rate , time to calculate it's simple interest");
    scanf("%f%f%f",&principal,&rate,&time);
    si=interest(principal,rate,time);
    printf("simple interest is %f",si);
    return 0;
    
}
float interest(float p,float r,float t)
{
    float g;
    g=p*r*t/100;
    return g;

}