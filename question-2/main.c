#include "header.h"

int convert(char c)
{
	if(c == 'I')
		return (1);
	else if(c == 'V')
		return (5);
	else if(c == 'X')
		return (10);
	else if(c == 'L')
		return (50);
	else if(c == 'C')
		return (100);
	else if(c == 'D')
		return (500);
	else if(c == 'M')
		return (1000);
	else
		return (1);
}

int verify_input(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'I' || str[i] == 'V' || str[i] == 'X' || str[i] == 'L' || str[i] == 'C' || str[i] == 'D' || str[i] == 'M')
			i++;
		else
			return (1);
	}
	return (0);
}	

int main(void)
{
	char	*str;
	int		i;
	int		res;

	str = malloc(sizeof(char) * BUFFER_SIZE);
	printf("Insira os algarismos romanos com letra máxima M:\n");
	scanf("%s", &*str);
	if(verify_input(str) != 0)
	{
		printf("Entrada inválida\n");
		return (1);
	}
	i = 0;
	res = 0;
	while(str[i] != '\0')
	{
		if(convert(str[i]) < convert(str[i + 1]))
		{
			res += convert(str[i + 1]) - convert(str[i]);
			i += 2;
		}
		else
		{
			res += convert(str[i]);
			i++;
		}
	}
	printf("%s = %d\n", str, res);
	free(str);
	return 0;
}
