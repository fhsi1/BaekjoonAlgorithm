#include <stdio.h>

void	swap(int *a, int *b)
{
	int	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	printNum(int *arr)
{
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
}

int	main()
{
	int	arr[3];

	scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
	printNum(arr);
	return (0);
}
