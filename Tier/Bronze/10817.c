#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int arr[3];

	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
		}
	}

	printf("%d", arr[1]);

	return (0);
}
