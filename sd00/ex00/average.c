#include "average.h"

float	average(const int *arr, int size)
{
	int		i;
	long	sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return (sum / size);
}
/* 
int	main(void)
{
	int		*array;
	int		i;
	int		lim;
	float	aver;

	lim = rand() % 15;
	array = calloc(lim, sizeof(int));
	while (i < lim)
	{
		array[i] = i;
		i++;
	}
	aver = average((const int *)array, lim);
	printf("the average is %f.\n", aver);
	free(array);
	return (0);
} */
