#include "critical_windows.h"

int	third_seq(const int *array)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (array[i] > 150)
			return (0);
		i++;
	}
	return (1);
}

int	second_seq(const int *array)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		sum += array[i];
		i++;
	}
	if ((sum / 5) >= 90)
		return (1);
	return (0);
}

int	first_req(const int *array)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 5)
	{
		if (array[i] >= 70)
			count++;
		i++;
	}
	if (count >= 3)
		return (1);
	return (0);
}

int	count_critical_windows(const int *readings, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size - 5)
	{
		if (first_req(readings + i) && second_seq(readings + i) \
		&& third_seq(readings + i))
			count++;
		i++;
	}
	return (count);
}
/* 
int	main(void)
{
	int	array[] = {86, 92, 84, 148, 72, 54, 122, 134, 54, 24, 11};
	int	i;
	int	n;

	n = count_critical_windows(array, 11);
	printf("there are %d segments.\n", n);
	return (0);
} */
