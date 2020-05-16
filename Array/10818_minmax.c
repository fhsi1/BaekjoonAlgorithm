#include <stdio.h>

int main()
{
    int n, num;
    int max = -1000001;
    int min = 1000001;
    /* When a value comes in, 
    to replace it with the value entered */

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }

    printf("%d %d", min, max);

    return 0;
}