#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}