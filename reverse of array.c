#include<stdio.h>
int main ()
{
    int a[100],n,i,temp;

    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    printf("\tEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;    
    }
    printf("reveresd array=");
    for(i=0;i<n;i++)
     printf("\t%d",a[i]);

     return 0;


}
