#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 5

int **cria_slot(int **slot)
{
	slot = malloc (sizeof(int *) * LINHAS);
	for (int line = 0; line < LINHAS; line++)
		slot[line] = malloc (sizeof (int) * COLUNAS);
	for (int line = 0; line < LINHAS; line++)
	{
		printf("Insira os valores da linha %d:\n", (line + 1));
		for (int col = 0; col < COLUNAS; col++)
			scanf("%d", &slot[line][col]);
	}
	return (slot);
}

int main (void)
{
	int premio[LINHAS][COLUNAS] = {{1,0,0,0,1}, {0,1,0,1,0}, {0,0,1,0,0}};
	int **slot = cria_slot(slot);
	int	count_prize = 0;

	for (int lines = 0; lines < LINHAS && count_prize != COLUNAS; lines++)
	{
		if (lines == LINHAS && count_prize != 5)
		{
			while (lines >= 0)
				free (slot[lines--]);
			free(slot);
			lines = 0;
			count_prize = 0;
			printf("Você perdeu, tente de novo.\n");
			slot = cria_slot(slot);
		}
		for (int cols = 0; cols < COLUNAS; cols++)
		{
			if (slot[lines][cols] == 1 && premio[lines][cols] == 1)
				count_prize++;
		}
	}
	printf ("Ganhou!\n");
	for(int lines = 0; lines < LINHAS; lines++)
		free (slot[lines]);
	free(slot);
	return (0);
}