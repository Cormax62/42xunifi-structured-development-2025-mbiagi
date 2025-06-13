#ifndef GRADE_MAP_H
# define GRADE_MAP_H

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

#define INVALID "Error"
#define GRADE_F "F"
#define GRADE_DM "D-"
#define GRADE_D "D"
#define GRADE_DP "D+"
#define GRADE_CM "C-"
#define GRADE_C "C"
#define GRADE_CP "C+"
#define GRADE_BM "B-"
#define GRADE_B "B"
#define GRADE_BP "B+"
#define GRADE_AM "A-"
#define GRADE_A "A"
#define GRADE_AP "A+"
#define GRADE_P "P"

enum e_grades
{
	F = 59,
	DM = 62,
	D = 66,
	DP = 69,
	CM = 72,
	C = 76,
	CP = 79,
	BM = 82,
	B = 86,
	BP = 89,
	AM = 92,
	A = 96,
	AP = 100,
};

typedef enum	s_GradeMapper
{
	PLUSMINUS,
	PASSFAIL,
	STANDARD
}	GradeMapper;

#endif