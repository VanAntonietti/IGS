#include "header.h"

static void	routine(t_stack *stack)
{	
	int		i;
	int		j;
	int		max;

	max = 0;
	for(i = 1; i < stack->len; i++)
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
	}
	if(max != 0)
		printf("O palíndromo da palavra %s, tem %d letras\n", stack->str, (max * 2) + 1);
	else
		printf("Essa palavra possue 0 palíndromos\n");
}

void	get_palindrome(t_igs *igs)
{
	pthread_t	thread[igs->index + 1];
	t_stack		*tmp;
	int			i;

	tmp = igs->list;
	for(i = 0; i <= igs->index; i++)
	{
		pthread_create(thread + i, NULL, (void (*))&routine, tmp);
		tmp = tmp->next;
	}
	for(i = 0; i <= igs->index; i++)
		pthread_join(thread[i], NULL);
}