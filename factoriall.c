#include <stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("factorial of %d is =  %lld\n", n, fact);
    return 0;
}