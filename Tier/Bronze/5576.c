#include <stdio.h>

void	swap(int *a, int *b)
{
	int	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sortScore(int *arr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
}

int	main()
{
	int	W[10];
	int	K[10];
	int	i;
	int	W_score, K_score;

	for (i = 0; i < 10; i++)
		scanf("%d", &W[i]);
	for (i = 0; i < 10; i++)
		scanf("%d", &K[i]);

	sortScore(W);
	sortScore(K);

	W_score = W[0] + W[1] + W[2];
	K_score = K[0] + K[1] + K[2];

	printf("%d %d\n", W_score, K_score);

	return(0);
}
