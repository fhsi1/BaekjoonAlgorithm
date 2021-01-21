#include <stdio.h>
#include <string.h>

int	main()
{
	char	arr[100] ={" ",};

	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	return (0);
}
