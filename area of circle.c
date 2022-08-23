#include<stdio.h>
float area(float);
int main()
{
    printf("enter radius of a circle : ");
    float c,r;
    scanf("%f",&r);
    c=area(r);
    printf("area of circle is %f",c);
    return 0;
}
float area(float a)
{
    float s;
    s= 1.34*a*a;
    return s;
}