#include<stdio.h>
int main()
{
    int n,m, result = 1;
    printf("Enter the base value : ");
    scanf("%d",&n);
    printf("Enter the exponential value : ");
    scanf("%d",&m);
    for(int i = 0;i<=m;i++)
    {
        printf("%i ",result);
        result *= n;
    }
}
