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
	
	tmp = malloc(sizeof(t_ListNode) * listasSize);
	tmp = listas;
	i = 0;
	size = 0;
	while(i < listasSize)
	{
		size += tmp[i]->size;
		tmp[i] = tmp[i]->next;
		i++;
	}
	mergedList = (t_ListNode *)malloc(sizeof(t_ListNode));
	mergedList->n = malloc(sizeof(int) * size);
	mergedList->size = size;
	mergedList->next = NULL;

	return (mergedList);
}


