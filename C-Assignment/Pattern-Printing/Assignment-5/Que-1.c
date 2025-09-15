#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER NUBMER:\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("*");
    }
    return 0;
}