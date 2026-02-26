#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,num,sum=0;
    int c=0,num1;
    printf("Enter Any Number");
    scanf("%d",&n);
    num=n;

    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    num1=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,c);
        num=num/10;
    }
    if(sum==num1)
        printf("The Number Is a Armstrong Number");
    else
      printf("The Number Is Not An Armstrong Number");
    
    return 0;
}
