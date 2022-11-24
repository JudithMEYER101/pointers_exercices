#include <stdio.h>
#include <stdlib.h>

void	sum(int *result)
{
	int	number1;
	int	number2;
	int	sum;

	scanf("%d", &number1);
	scanf("%d", &number2);
	sum = number1 + number2;
	*result = sum;
}

int	main(void)
{
	int	result;

	sum(&result);
	printf("%d\n", result);
	return (0);
}
