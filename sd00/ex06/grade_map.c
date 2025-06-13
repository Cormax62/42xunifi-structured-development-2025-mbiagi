#include "grade_map.h"

static void standard(const char **mapped_grades, const int *scores, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if (scores[i] < 0 || scores[i] > 100)
			mapped_grades[i] = INVALID;
		else if (scores[i] <= F)
			mapped_grades[i] = GRADE_F;
		else if (scores[i] <= DP)
			mapped_grades[i] = GRADE_D;
		else if (scores[i] <= CP)
			mapped_grades[i] = GRADE_C;
		else if (scores[i] <= BP)
			mapped_grades[i] = GRADE_B;
		else if (scores[i] <= AP)
			mapped_grades[i] = GRADE_A;
		i++;
	}
}

static void passfail(const char **mapped_grades, const int *scores, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if (scores[i] < 0 || scores[i] > 100)
			mapped_grades[i] = INVALID;
		else if (scores[i] <= F)
			mapped_grades[i] = GRADE_F;
		else if (scores[i] <= AP)
			mapped_grades[i] = GRADE_P;
		i++;
	}
}

static void plusminus(const char **mapped_grades, const int *scores, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if (scores[i] < 0 || scores[i] > 100)
			mapped_grades[i] = INVALID;
		else if (scores[i] <= F)
			mapped_grades[i] = GRADE_F;
		else if (scores[i] <= DM)
			mapped_grades[i] = GRADE_DM;
		else if (scores[i] <= D)
			mapped_grades[i] = GRADE_D;
		else if (scores[i] <= DP)
			mapped_grades[i] = GRADE_DP;
		else if (scores[i] <= CM)
			mapped_grades[i] = GRADE_CM;
		else if (scores[i] <= C)
			mapped_grades[i] = GRADE_C;
		else if (scores[i] <= CP)
			mapped_grades[i] = GRADE_CP;
		else if (scores[i] <= BM)
			mapped_grades[i] = GRADE_BM;
		else if (scores[i] <= B)
			mapped_grades[i] = GRADE_B;
		else if (scores[i] <= BP)
			mapped_grades[i] = GRADE_BP;
		else if (scores[i] <= AM)
			mapped_grades[i] = GRADE_AM;
		else if (scores[i] <= A)
			mapped_grades[i] = GRADE_A;
		else if (scores[i] <= AP)
			mapped_grades[i] = GRADE_AP;
		i++;
	}
}

void map_scores(const int *scores, int size, GradeMapper mapper, const char **mapped_grades)
{
	if (mapper == STANDARD)
		standard(mapped_grades, scores, size);
	else if (mapper == PLUSMINUS)
		plusminus(mapped_grades, scores, size);
	else if (mapper == PASSFAIL)
		passfail(mapped_grades, scores, size);
}
/* 
int	main(void)
{
	int			scores[8];
	int			i;
	const char	**grades;

	i = 0;
	grades = malloc(sizeof(char *) * 8);
	while (i < 8)
	{
		*grades = malloc(sizeof(char) * 2);
		i++;
	}
	map_scores(scores, 8, STANDARD, grades);
} */