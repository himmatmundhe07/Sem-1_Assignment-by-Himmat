#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<=i; k++ )
        {
            printf("%c",k+'A');
        }
        printf(" \n");
    }
    return 0;
}