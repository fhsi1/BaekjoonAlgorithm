#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int alpha[26];

    scanf("%s", s);

    for (int i = 0; i < 26; i++)
    {
        alpha[i] = -1;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < strlen(s); j++)
        {
            if (i == s[j])
            {
                alpha[s[j] - 'a'] = j; // becuase the return value is 'position'
                break;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d", alpha[i]);
        if (i < 25)
        {
            printf(" ");
        }
    }

    return 0;
}