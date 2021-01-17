#include <stdio.h>

void	swap(int *a, int *b)
{
	int	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main()
{
	int	N, i, j;
	int	arr[1000000] = {0, };
	int	min;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++)
	{
		min = arr[i];
		for (j = 0; j < N; j++)
		{
			if (arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	return (0);
}
