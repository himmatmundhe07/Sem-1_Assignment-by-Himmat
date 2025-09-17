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
        for(int m=1; m<=i; m++)
        {
            printf("%c",'A'+(m-1));
        }
        for(int m=i-1; m>=1; m--)
        {
            printf("%c",'A'+(m-1));
        }
        printf("\n");
        
    }
    for (int a=n-1; a>=1; a--)
    {
        for(int q=1; q<=n-a; q++)
        {
            printf(" ");
        }
        for(int k=1; k<=a; k++)
        {
            printf("%c",'A'+k-1);
        }
        for(int l=a-1; l>=1; l--)
        {
            printf("%c",'A'+l-1);
        }
        printf("\n");
    }
    return 0;
}