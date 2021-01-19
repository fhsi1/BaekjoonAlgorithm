#include <stdio.h>

int	main()
{
	int	input[3] = {0, };
	int	max,tmp;

	while (1)
	{
		scanf("%d %d %d", &input[0], &input[1], &input[2]);
		if (input[0] == 0 && input[1] == 0 && input[2] == 0)
			break;
		else
			{
				max = 0;
				tmp = 0;
				for (int i = 0; i < 3; i++)
				{
					if (input[i] > max)
						max = input[i];
				}
				for (int i = 0; i < 3; i++)
				{
					if (input[i] != max)
						tmp += input[i] * input[i];
				}
				if (max * max == tmp)
					printf("right\n");
				else
					printf("wrong\n");
			}
	}
	return (0);
}
