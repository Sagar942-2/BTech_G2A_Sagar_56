#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;

    printf("Enter the number of elements in an array:");
    scanf(" %d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array=%d",sum);

    return 0;
    }
