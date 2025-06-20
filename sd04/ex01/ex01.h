#ifndef EX01_H
# define EX01_H

# include "libft.h"

int		check_date(int *date);
float	atof(char *str);

typedef struct	s_spending
{
	int		*date;
	float	price;
	char	*reason;
	char	*comment;
}				t_spending;


#endif