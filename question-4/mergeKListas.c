#include "header.h"

struct ListNode *mergeKListas(struct ListNode **listas, int listasSize)
{
	int			i;
	int			j;
	int			k;
	int			size;
	int			counter;
	t_ListNode	*mergedList;
	t_ListNode	**tmp;
	
	tmp = listas;
	i = 0;
	size = 0;
	counter = 0;
	while(i < listasSize)
	{
		size += tmp[i]->size;
		i++;
	}
	mergedList = (t_ListNode *)malloc(sizeof(t_ListNode));
	mergedList->n = malloc(sizeof(int) * size);
	mergedList->size = size;
	mergedList->next = NULL;
	if(size == 0)
		return (mergedList);
	i = 0;
	j = 0;
	k = 0;
	while(counter < size)
	{
		while (i != listasSize)
		{
			if (j == tmp[i]->size)
			{
				i++;
				j = 0;
			}
			else
			{
				mergedList->n[k] = tmp[i]->n[j];
				j++;
				k++;
				counter++;
			}
		}
	}
	return (mergedList);
}
