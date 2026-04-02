#include<stdio.h>
int main()
{ 
    int i, n,prime=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++);
    {
       if(n%i==0)
       {
           prime=0;
          
           
       }
    }
    if(prime==0)
    {
        printf("Prime number");
        
    }
    else{
        printf("Not a prime number");
        }
     }

