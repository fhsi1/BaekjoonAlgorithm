#include <stdio.h>

int main()
{
    int n, x, i, result;

    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &result);
        if (result < x)
            printf("%d ", result);
    }

    return 0;
}