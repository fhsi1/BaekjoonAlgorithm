#include <stdio.h>

int main()
{
    char str[20];
    int c, t, repeat;

    scanf("%d", &c);
    for (t = c; t > 0; t--)
    {
        scanf("%d", &repeat);
        scanf(" %s", &str);

        for (int i = 0; str[i] != '\0'; i++)
        {
            for (int j = 0; j < repeat; j++)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}