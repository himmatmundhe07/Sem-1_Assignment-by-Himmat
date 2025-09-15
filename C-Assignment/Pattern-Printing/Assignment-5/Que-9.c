#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER NUBMER:\n");
    scanf("%d",&n);
    printf("\n");

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c",('A'+j-1));
        }
        printf("\n");
    }
    
    //MY APPROCH TO NOT USE "-1".

    // int n;
    // printf("PLEASE ENTER NUBMER:\n");
    // scanf("%d",&n);
    // printf("\n");

    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=i; j++)
    //     {
    //         printf("%c",('A'+j));
    //     }
    //     printf("\n");
    // }
    return 0;
}