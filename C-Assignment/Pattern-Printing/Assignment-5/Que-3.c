#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER NUBMER:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (n <= 26)
        {
            printf(" %c ", 'A' + (i % 26));
        }
    }
    return 0;
}