#include <stdio.h>
int main()
{
    int n, s;
    printf("PLEASE ENTER row:\n");
    scanf("%d", &n);
    printf("PLEASE ENTER columb:\n");
    scanf("%d", &s);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (i == 1 || i == n || j == 1 || j == s)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}