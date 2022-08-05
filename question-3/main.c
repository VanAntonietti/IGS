#include "header.h"

int verify_input(char *input)
{
	int i;

	i = 0;
	while (input[i] != '\0')
	{
		if (isxdigit(input[i]) == 0 || ishexnumber(input[i]) == 0 || input[i] == 'x')
			i++;
		else
			return(1);
	}
	return(0);
}

static void	rgb(char *initial, char *final, int steps)
{
	unsigned int	red_initial;
	unsigned int	red_final;
	unsigned int	red_steps;
	unsigned int	red_total;
	int				i;
	char			r_initial[3];
	char			r_final[3];

	strncpy(r_initial, &initial[2], 2);
	strncpy(r_final, &final[2], 2);
	r_initial[2] = '\0';
	r_final[2] = '\0';
	red_initial = (unsigned int)strtol(r_initial, NULL, 16);
	red_final = (unsigned int)strtol(r_final, NULL, 16);
	red_total = (red_final - red_initial) / steps;
	red_steps = red_total;
	for(i = 0; i < steps; i++)
	{
		printf("0x%c%c%s\n", HEX[red_steps / 16], HEX[red_steps % 16], final + 4);
		red_steps += red_total;
	}
}

int main(void)
{
	char	*initial;
	char	*final;
	int		steps;

	initial = malloc(sizeof(char) * 8);
	final = malloc(sizeof(char) * 8);
	printf("Insira a cor inicial em Hexadecimal com o seguinte formato '0x000000':");
	scanf("%s", &*initial);
	printf("Insira a cor final em Hexadecimal com o seguinte formato '0x000000':");
	scanf("%s", &*final);
	printf("Insira o número de passos para chegar na cor final: ");
	scanf("%d", &steps);
	if(!verify_input(initial) || !verify_input(final) || steps < 1 || strlen(initial) != 8 || strlen(final) != 8)
	{
		printf("Entrada inválida\n");
		return (1);
	}
	rgb(initial, final, steps);
	free(initial);
	free(final);

	return 0;
}
