#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" %c ",'A'+(j%26));
        }
        for(int k=i-1; k>=1; k--)
        {
            printf(" %c ", 'A'+(k-1));
        }
        printf("\n");
    }
    return 0;
}