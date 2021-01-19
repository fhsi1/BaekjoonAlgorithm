#include <stdio.h>
#include <string.h>

int	main()
{
	char	arr[1000000] = {" ",};
	int		cnt[26] = {0,};
	int		i, j, tmp, c;

	scanf("%s", arr);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a')
			arr[i] -= 32;
		cnt[arr[i] - 'A']++;
	}

	tmp = 0;
	for (i = 0; i < 26; i++)
	{
		if (tmp < cnt[i])
		{
			tmp = cnt[i];
			c = i;
		}
		else if (tmp == cnt[i])
			c = '?';
	}

	if (c != '?')
		printf("%c", 'A' + c);
	else
		printf("?");

	return (0);
}
