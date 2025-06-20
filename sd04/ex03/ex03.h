#ifndef EX03_H
# define EX03_H

# include "libft.h"

int		chaeck_id(int id);
int		check_empty_field(t_lst list);
bool	is_watched(char	*av);
int		check_rating(bool w, int rating);
int		check_date(bool w, int *date);

typedef struct	s_lst
{
	int		id;
	char	*title;
	char	*genre;
	bool	watched;
	int		rating;
	int		*date;
}				t_lst;

#endif