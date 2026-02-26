#include<stdio.h>
int main ()
{
    int a;
    printf("Enter your age\t");
    scanf("%d",&a);
    if (a>=18)
    
        printf ("You are eligiable for Voting");
       
    
    if(a<=17)
    
        printf ("You are not eligiable for voting");
    
    return 0;
}