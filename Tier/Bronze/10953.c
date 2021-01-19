#include <stdio.h>

int	main()
{
	int	T, A, B, sum;

	scanf("%d", &T);
	sum = 0;
	for (int i = 0; i < T; i++)
	{
		scanf("%d,%d", &A, &B);
		sum = A + B;
		printf("%d\n",sum);
	}
	return (0);
}
