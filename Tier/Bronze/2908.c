#include <stdio.h>

void	swap(char *a, char *b)
{
	char	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	printNum(char *arr)
{
	for (int i = 0; i < 3; i++)
		printf("%c", arr[i]);
}

int	main()
{
	char	A[4] = {" ",};
	char	B[4] = {" ",};

	scanf("%s %s", A, B);
	swap(&A[0], &A[2]);
	swap(&B[0], &B[2]);

	for (int i = 0; i < 3; i++)
	{
		if (A[i] > B[i])
		{
			printNum(A);
			break;
		}
		else if (A[i] < B[i])
		{
			printNum(B);
			break;
		}
		else
			continue;
	}

	return (0);
}
