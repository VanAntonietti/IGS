#include "header.h"
static void	end_free(t_igs *igs)
{	
	t_stack	*tmp;

	while(igs->index >= 0)
	{
		tmp = igs->list->next;
		free(igs->list->str);
		free(igs->list);
		igs->list = tmp;
		igs->index--;
	}
}

static int ft_open(t_igs *igs)
{
	int		i;
	char	buffer[BUFFER_SIZE];
	FILE	*file;
	t_stack *tmp;

	file = fopen("arquivo.txt", "r");
	if(file == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	
	i = 0;
	while(fscanf(file, "%s\n", buffer) != EOF)
	{
		if(i == 0)
		{
			igs->list = malloc(sizeof(t_stack));
			igs->list->str = strdup(buffer);
			igs->list->len = strlen(igs->list->str);
			tmp = igs->list;
		} else {
			tmp->next = malloc(sizeof(t_stack));
			tmp = tmp->next;
			tmp->str = strdup(buffer);
			tmp->len = strlen(tmp->str);
		}
		igs->index = i;
		i++;
	}
	fclose(file);
	return 0;
}

int main(void)
{
	t_igs igs;

	ft_open(&igs);
	get_palindrome(&igs);
	end_free(&igs);
	return 0; 
}