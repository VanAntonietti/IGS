#include "header.h"

static void	*routine(t_stack *stack)
{	
	int		i;
	int		j;
	int		max;

	i = 1;
	max = 0;
	while(i < stack->len)
	{
		j = 1;
		while(i - j >= 0 && i + j < stack->len)
		{
			if(stack->str[i - j] == stack->str[i + j])
				j++;
			else
				break;
		}
		if(max < j - 1)
			max = j - 1;
		
	i++;
	}
	if(max != 0)
		printf("O palíndromo da palavra %s, tem %d letras\n", stack->str, (max * 2) + 1);
	else
		printf("Essa palavra possue 0 palíndromos\n");
}

void	get_palindrome(t_igs *igs)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = igs->list;
	while(i <= igs->index)
	{
		routine(tmp);
		tmp = tmp->next;
		i++;
	}
}