#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int sum, score;
    char arr[80];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        sum = 0;
        score = 1;
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O') // It is 'O', not '0'.
            {
                sum += score;
                score++;
            }
            else
            {
                score = 1;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}