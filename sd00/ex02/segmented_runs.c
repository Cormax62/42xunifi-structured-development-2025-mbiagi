#include "segmented_runs.h"

int	count_segments(const int *arr, int size)
{
	int	i;
	int	n;
	int	count;
	int	seg;

	i = 0;
	n = 0;
	count = 1;
	seg = 0;
	n = arr[i];
	while (i < size)
	{
		if (count >= 3 && arr[i] == -1)
		{
			seg++;
			count = 1;
			n = arr[i + 1];
		}
		else if (arr[i] == n + 1)
		{
			n = arr[i];
			count++;
		}
		else
			count = 1;
		i++;
	}
	if (count >= 3)
		return (seg + 1);
	return (seg);
}
/* 
int	main(void)
{
	int	array[] = {1, 2, 3, -1, 5, 6, 7, -1, 8, 9, 11};
	int	i;
	int	n;

	n = count_segments(array, 11);
	printf("there are %d segments.\n", n);
	return (0);
} */
