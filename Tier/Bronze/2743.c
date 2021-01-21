#include <stdio.h>

int	cntlen(char *a)
{
	int	len;

	len = 0;
	while (a[len])
		len++;
	return (len);
}

int	main()
{
	char	arr[100];

	scanf("%s", arr);
	printf("%d",cntlen(arr));

	return (0);
}
