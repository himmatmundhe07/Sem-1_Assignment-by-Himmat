// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("PLEASE ENTER A NUMBER:\n");
//     scanf("%d",&n);

//     for(int i=n; i>0; i--)
//     {
//         for(int j=0; j<i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//ANOTHER APPROCH
// #include <stdio.h>

// int main() {
//     int n = 5; // You can change this value to generate a larger or smaller triangle

//     for (int row = 1; row <= n; row++) 
//     {
//         for (int col = 1; col <= n - row + 1; col++) 
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}