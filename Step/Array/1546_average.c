#include <stdio.h>

int main()
{
    int n, score;
    int max = 0;
    float arr[1000];
    float sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);

        arr[i] = score;
        if (score > max)
        {
            max = score;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }

    printf("%.2f", sum / n);

    return 0;
}