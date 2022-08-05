#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 5

int **cria_slot(int **slot)
{
	int	col;
	int	line;

	line = 0;
	slot = malloc (sizeof(int *) * 3);
	while (line < 3)
		slot[line++] = malloc (sizeof (int));
	line = 0;
	col = 0;
	while (line < 3)
	{
		printf("Insira os valores da linha %d:\n", (line + 1));
		while (col < 5)
		{
			scanf("%d", &slot[line][col]);
			col++;
		}
		col = 0;
		line++;
	}
	return (slot);
}

int main (void)
{
	int premio[LINHAS][COLUNAS] = {{1,0,0,0,1}, {0,1,0,1,0}, {0,0,1,0,0}};
	int **slot = 0;
	int lines = 0;
	int cols = 0;
	int comp = slot[0][0];
	int count_prize = 0;

	slot = cria_slot(slot);
	while (lines < 3 && count_prize != 5)
	{
		while (cols < 5)
		{
			if (comp == slot[lines][cols] && premio[lines][cols])
				count_prize++;
		cols++;
		}
		cols = 0;
		lines ++;
		if (lines == 3 && count_prize != 5)
		{
			lines = 0;
			while (lines < 3)
			free (slot[lines++]);
			free(slot);
			lines = 0;
			cols = 0;
			count_prize = 0;
			slot = cria_slot(slot);
			comp = slot[0][0];
		}
	}
	printf ("Gahnou!\n");
	return (0);
}