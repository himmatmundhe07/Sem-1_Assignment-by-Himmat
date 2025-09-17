#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int m=1; m<=2*i-1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a=1; a<=n; a++)
    {
        for(int q=1; q<=a-1; q++)
        {
            printf(" ");
        }
        for(int k=1; k<=2*(n-a)+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}