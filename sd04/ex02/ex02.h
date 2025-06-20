#ifndef EX02_H
# define EX02_H

# define MAX_ID 42

# include "libft.h"

int		check_id(int id);
int		check_empty_field(t_agenda agenda);

typedef struct	s_agenda
{
	int		id;
	char	*name;
	long	phone;
	char	*mail;
	char	*city;
	char	*address;
}				t_agenda;


#endif