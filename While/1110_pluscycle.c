#include <stdio.h>

int main()
{
    int n, result;
    int A, B, C, D;
    int count = 0;

    scanf("%d", &n);
    result = n;

    while (1)
    {
        A = n / 10;
        B = n % 10;
        C = (A + B) % 10;
        D = (B * 10) + C;
        n = D;
        count++;
        if (D == result)
        {
            break;
        }
    }
    printf("%d", count);
}