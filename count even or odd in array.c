#include<stdio.h>
int main()
{
    int arr[100],n;
    int evencount=0,oddcount=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter%d elements:\n",n);
    for(int i=0;i,n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evencount++;
        }
        else{
            oddcount;
         }
    }
    printf("Even number:%d\n",evencount);
    printf("Odd numbers:%d\n",oddcount);
    return 0;

}
