#include <stdio.h>

int main()
{
    int num;
    int max = 0;
    int order = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
            order = i;
        }
    }
    printf("%d\n%d\n", max, order + 1);
    /* order -> This includes assigning the first value to 'max' */

    return 0;
}