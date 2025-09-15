#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER NUBMER:\n");
    scanf("%d",&n);
    printf("\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %c ",j+'A');
        }
        printf("\n");
    }
    return 0;
}