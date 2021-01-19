#include <stdio.h>

int	facto(int num)
{
	if (num > 1)
		return num * facto(num - 1);
	else
		return 1;
}

int	main()
{
	int	N;

	scanf("%d", &N);
	printf("%d", facto(N));

	return (0);
}
