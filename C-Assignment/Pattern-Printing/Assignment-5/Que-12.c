// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("PLEASE ENTER A NUMBER:\n");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             printf(" ");
//         }
//         for(int k=0; k<=i; k++ )
//         {
//             printf("%c",k+'A');
//         }
//         printf(" \n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        int count=65;
        for (int j = 1; j <=n; j++)
        {
            if (i + j >n)
            {
                printf("%c",count);
                count++;
            }
            else
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
    return 0;
}