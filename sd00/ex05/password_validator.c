#include "password_validator.h"

bool	right_lenght(const char *pw)
{
	int	i;

	i = 0;
	while (pw[i])
		i++;
	if (i < 8)
		return (false);
	return (true);
}

bool	right_case(const char *pw)
{
	int	i;
	int	upper;
	int	lower;
	int	digit;

	i = 0;
	upper = 0;
	lower = 0;
	digit = 0;
	while (pw[i])
	{
		if (pw[i] >= 65 && pw[i] <= 90)
			upper++;
		else if (pw[i] >= 97 && pw[i] <= 122)
			lower++;
		else if (pw[i] >= 48 && pw[i] <= 57)
			digit++;
		i++;
	}
	if (digit > 0 && upper > 0 && lower > 0)
		return (true);
	return (false);
}

bool	special_character(const char *pw)
{
	const char	*special = "@#$%ˆ&*";
	int			i;
	int			j;

	i = 0;
	while (pw[i])
	{
		j = 0;
		while (special[j])
		{
			if (pw[i] == special[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

bool diff(const char *new_pw, const char *curr_pw)
{
	int			i;
	int			j;

	i = 0;
	while (new_pw[i])
	{
		if (curr_pw[i] == '\0')
			return (true);
		else if (new_pw[i] != curr_pw[i])
			return (true);
	}
	return (false);
}

PwStatus validate_password(const char *new_pw, const char *curr_pw)
{
	PwStatus	validator;

	if ((!right_lenght(new_pw)) || (!right_case(new_pw)) || \
	(!special_character(new_pw)) || (!diff(new_pw, curr_pw)))
	{
		validator.is_valid = false;
		return (validator);
	}
}
/* 
int	main(void)
{
	PwStatus	supercazzola;

	supercazzola = validate_password("Merdina66*", "Cagasbur4&");
	return (supercazzola.is_valid);
} */
