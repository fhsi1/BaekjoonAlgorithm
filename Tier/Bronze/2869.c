#include <stdio.h>

int	main()
{
	int A, B, V, count;


	scanf("%d %d %d", &A, &B, &V);

	if (V == A)
		printf("1\n");
	else
	{
		count = (V - A) / (A - B);
		if ((V - A) % (A - B) == 0)
			printf("%d\n", count + 1);
		else
			printf("%d\n", count + 2);
	}
	return (0);
}
