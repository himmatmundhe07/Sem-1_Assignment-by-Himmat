#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        
        for(int j=n; j>=1; j--)
        {
            if(i==1||i==j||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }
} 