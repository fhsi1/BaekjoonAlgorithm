#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);
    if (m < 45)
    {
        m += 60; // m = m + 60
        h--;     // h - 1
        if (h < 0)
            h = 23; // a day = 24 hours
    }
    printf("%d %d", h, m - 45); // setting time

    return 0;
}