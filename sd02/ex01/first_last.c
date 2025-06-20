#include "first_last.h"

void	first_last(int arr[], int size, int target, int *first, int *last)
{
	int	i;

	i = 0;
	*first = -1;
	while (i < size)
	{
		if (*first == -1 && arr[i] == target)
			*first = i;
		if (arr[i] == target)
			*last = i;
		i++;
	}
}
/* 
int	main(void)
{
	int	array[] = {1, 2, 2, 5, 6, 5};
	int	i;
	int	first;
	int	last;

	first_last(array, 6, 5, &first, &last);
	printf("the first is %d, and the last is %d.\n", first, last);
	return (0);
} */
