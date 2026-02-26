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
    if((a==b)||(a==c)||(b==c))
    {
        printf("\nThe triangle is isocele triangle");
    }
    else if (a==b==c)
    {
        printf("\nThe trangle is eqilateral");
    }
    else
    {
        printf("\nThe triangle is scalen triangle");
    }
    return 0;
}
