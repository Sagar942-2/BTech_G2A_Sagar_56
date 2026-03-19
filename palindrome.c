#include<stdio.h>
int main()
{
    int n,i,rev=0,temp;
    printf("Enter any number: ");
    scanf("%d",&n);

    temp=n;
    while(n!=0)
    {
     i=n%10;
     rev=rev*10+i;
     n=n/10;
    }
    if(rev==temp)
    printf("number will be palindrome");
    else
    printf(" will not palindrome");
    return 0;
}
