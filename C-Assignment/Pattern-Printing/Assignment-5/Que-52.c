#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER Number:\n");
    scanf("%d", &n);
    int num=n * (n + 1) / 2;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            int binary=(i + j) % 2;
            printf("%d",binary);
        }
        printf("\n");
    }
    return 0;
}