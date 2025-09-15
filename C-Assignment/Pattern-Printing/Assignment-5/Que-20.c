#include <stdio.h>
int main()
{
    int n,count=0;
    printf("PLEASE ENTER NUBMER:\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%c",'A'+(count%26));
            count++;
        }
        printf("\n");
    }
    return 0;
}