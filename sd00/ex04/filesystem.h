#ifndef FILESYSTEM_H
# define FILESYSTEM_H

# include <X11/X.h>
# include <X11/keysym.h>
# include <bsd/string.h>
# include <ctype.h>
# include <fcntl.h>
# include <linux/stat.h>
# include <pthread.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <sys/stat.h>
# include <sys/time.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include <math.h>

# define FILE 0
# define FOLDER 1

typedef struct FSNode
{
	const char	*name;
	int			type;
	int			size;
	FSNode		*next;
}	FSNode;


#endif