#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of first side:");
    scanf(" %d",&a);
    printf("Enter the value of second side:");
    scanf(" %d",&b);
    printf("Enter the value of third side:");
    scanf(" %d",&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf("yes triangle can be form");

    }  
    if((a==b)&&(b!=c)||(b==c)&&(a!=b))
    {
        printf("\nThe triangle is isocele triangle");
    }
     if ((a==b)&&(b==c))
    {
        printf("\nThe trangle is eqilateral");
    }
    if((a!=b)&&(b!=c)&&(a!=c))
    {
        printf("\nThe triangle is scalen triangle");

    }
    return 0;
}
