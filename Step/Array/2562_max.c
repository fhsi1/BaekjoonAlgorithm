#include <stdio.h>

int main()
{
    int arr[9];
    int max = 0;
    int order;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
            order = i + 1;
        }
    }

    printf("%d\n%d\n", max, order);

    return 0;
}