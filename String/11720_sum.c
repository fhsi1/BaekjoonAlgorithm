#include <stdio.h>

int main()
{
    char num[100] = {
        0,
    };
    int sum = 0, n = 0;

    scanf("%d", &n);
    scanf("%s", num);

    for (int i = 0; i < n; i++)
    {
        sum += num[i] - '0';
    }
    printf("%d", sum);

    return 0;
}