#ifndef EX00_H
# define EX00_H

# include "libft.h"

int	check_matching_id(t_book book);
int	*check_matching_author(t_book book);
int	*check_matching_title(t_book book);

typedef struct	s_book
{
	char	*title;
	int		identifier;
	char	*author;
}				t_book;

#endif